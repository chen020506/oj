#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct Book{
    int m_id;//书号  
    int s_t=0;//借书时间
    int e_t=0;//还书时间
    int m_bool=0;//用来判断是不是无效记录，书被借或者还书都会加一，当为2的时候被认为有效数据
};
int arr[1010];//用这个数组用来判断这本书有没有借出，1代表借出
int main ()
{
    int i,n;//n天
    cin>>n;
    while(n--){
        vector<struct Book>mv;//存放书信息的数组
        mv.clear();
        while(1){
            int id,hh,mm;
            char op;
            scanf("%d %c %d:%d",&id,&op,&hh,&mm);
            if(id==0) break;//当书号为0的时候退出这一天，之后输出这一天的信息
            if(op=='S'&&arr[id]==0){//借书
            //if(op=='S'){//借书
                arr[id]=1;//这本书被借出
                struct Book book;
                book.m_id=id;
                book.s_t=hh*60+mm;
                book.m_bool++;
                
                mv.push_back(book);//将这个信息放入数组中
            }
            else if(op=='E'){//还书
                //必须先借出才可以还书 如果这本书还没有被借出去则跳过这条信息
                if(arr[id]==0) continue;
                //找到这本书在vector中的位置i
                for( i=0;i<mv.size();i++)
                    if(mv[i].m_id==id)
                        break;
                arr[id]=0;//这本书已归还
                mv[i].e_t=hh*60+mm;
                mv[i].m_bool++;
            }
            
        }
        //找到有效数据
        int ret=1,num=0;//ret读者借书次数，num阅读总时间
        for(i=0;i<mv.size();i++){
            if(mv[i].m_bool%2==0){
                ret=ret*mv[i].m_bool/2;
                num+=mv[i].e_t-mv[i].s_t;
            }
        }
        //此处的平均阅读时间需要四舍五入 不过首先需要特判等于0的情况
        if(ret==0){
            printf("0 0\n");
            continue;
        }
        float temp;
        temp=num/(ret*1.0);
        if(temp>=(num/ret+0.5))
            cout<<ret<<" "<<num/ret+1<<endl;
        else 
            cout<<ret<<" "<<num/ret<<endl;
    }
    return 0;
}