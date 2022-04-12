//  时间：2022.04.12 22点49分
#include<iostream>
#include<cmath>
using namespace std;
int n,ret;
bool check(int m)
{
    int k=(int)sqrt( (double)m );
    for(int i=2;i<=k;i++)
        if(m%i==0)
            return false;//不是素数
    return true;//是素数
}
int main ()
{
    cin>>n;
    while(n--)
    {
        cin>>ret;
        if(ret==1)//特判1的情况，1不是素数
        {
            cout<<"No"<<endl;
            continue;
        }
        
        if(check(ret))//是素数
            cout<<"Yes"<<endl;
        if(!check(ret))
            cout<<"No"<<endl;
            
    }
    return 0;
}