#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
bool arr[1010];//用来判断这个书号出现过吗
class Book
{
    public:
        Book(int id,char op,int tt){
        if(op=='S')
            bool_s=tt;
        else if (op=='E')
            bool_e=tt;
        m_id=id;
    }
    int m_id;
    int bool_s=-1;//借书时间 这里千万不能初始化为0，因为有可能借书时间为00：00这种傻x数据
    int bool_e=0;//还书
};
void func(vector<Book>mv)
{
    int num=0;//记录有效书的个数
    int sum=0;
    for(int i=0;i<mv.size();i++)//遍历数组
        if((mv[i].bool_s!=-1)&&(mv[i].bool_e!=0)&&(mv[i].bool_s!=mv[i].bool_e)){//借书和还书都完整才算有效书
            num++;
            //cout<<"借书："<<mv[i].bool_s<<" 还书："<<mv[i].bool_e<<endl;
            sum+=mv[i].bool_e-mv[i].bool_s;
        }
    if(num==0){//当没有有效书的时候需要特判，否则会除以0导致报浮点错误
        cout<<0<<" "<<0<<endl;
        return;
    }
    //此处要进行四舍五入
   // cout<<num<<" "<<sum<<endl;
    float d = (float)num;
	float e = (float) sum;
	float f = e / d;
    //cout << int(f + 0.5) <<endl;
    printf("%d %d\n",num,int(f + 0.5));
}

int main ()
{
    int n;
    cin>>n;
    vector<Book>mv;
    int i=0;//用来记录第几天
    while(1)
    {
        int id,hh,mm;
        char op;
        scanf("%d %c %d:%d",&id,&op,&hh,&mm);
        if(id==0){
            if(i==n)
                break;//如果已经计算完n天了则退出循环
            func(mv);   
            i++;//进行下一天
            mv.clear();//将数组清空
            memset(arr,0,sizeof arr);//将判断数组初始化
            continue;
        }
        //看这个书号出现过吗
        if(arr[id]==1){//出现过
            for(int i=0;i<mv.size();i++){
                if(id==mv[i].m_id){
                    if(op=='S'&&mv[i].bool_e==0) mv[i].bool_s=hh*60+mm;//同一本书被借多次取最后一次借书时间为准 
                    //并且之前没出现过这本书的还书信息
                    else if(op=='E'&&mv[i].bool_e==0) mv[i].bool_e=hh*60+mm;
                }   
            }
        }
        else if(arr[id]==0){//这个书名没出现过
            Book book(id,op,hh*60+mm);
            mv.push_back(book);
            arr[id]=1;
        }
            
    }
    return 0;
}