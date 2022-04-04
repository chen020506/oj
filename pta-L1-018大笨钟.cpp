// 时间：2022.04.04 19点57分
#include<iostream>
using namespace std;
int main ()
{
    int hh,mm;
    scanf("%d:%d",&hh,&mm);
    if(hh>=0&&hh<12)//未到敲钟时间
    {
        printf("Only %02d:%02d.  Too early to Dang.",hh,mm);
        return 0;
    }
    if(hh==12&&mm==0)//特判一下小时为12并且分钟为0的情况
        {
        printf("Only %02d:%02d.  Too early to Dang.",hh,mm);
        return 0;
    }
    //小时为整点分钟为0的情况
    if(mm==0){
        for(int i=1;i<=hh-12;i++)
            cout<<"Dang";
    }
    //小时为整点分钟不为0的情况
    if(mm!=0)
        for(int i=1;i<=hh-11;i++)
            cout<<"Dang";
    cout<<endl;
            
    return 0;
}