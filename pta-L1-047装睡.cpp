//  时间：2022.05.18 09点28分
#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    while(n--){
        string id;
        int h,m;
        //15~20 50~70
        cin>>id>>h>>m;
        //cout<<id<<h<<m;
        if((h<15||h>20)//呼吸不在范围
           ||(m<50||m>70)//脉搏不在范围
           ||((h<15||h>20)&&(m<50||m>70))//两个都不在范围
        )
            cout<<id<<endl;
    }
    return 0;
}