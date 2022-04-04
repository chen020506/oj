// 时间：2022.04.04 22点44分
#include<iostream>

using namespace std;
int a,b;//a和b分别是甲乙两人的酒量
int n;//n轮比赛记录
int a_count,b_count;//a_count表示甲当前喝的酒量
int main()
{
    cin>>a>>b;
    cin>>n;
    while(n--){
        int as,ap,bs,bp;//as代表甲喊的数字，ap代表甲比划的数字
    //如果谁比划出的数字正好等于两人喊出的数字之和，谁就输了，输家罚一杯酒。
        cin>>as>>ap>>bs>>bp;
       
     //这里有两个易错点：1、当两个人同时输或者同时赢时都是不喝酒的
     //2、假设甲的最大酒量是1，但是当甲喝一次之后不会倒，只有当喝两次之后才会倒
        if((bp==(as+bs))&&(ap!=(as+bs)))//乙输而甲没输
            b_count++;
        if((ap==(as+bs))&&(bp!=(as+bs)))//甲输而乙没输
            a_count++;
        
        //判断两人是否有喝醉的人
        if(a_count==a+1)//甲醉了
        {
            cout<<"A"<<endl;
            cout<<b_count<<endl;
            return 0;
        }
        if(b_count==b+1)//甲醉了
        {
            cout<<"B"<<endl;
            cout<<a_count<<endl;
            return 0;
        }
            
    }
    return 0;
   
}