//  时间：2022.05.29 23点03分
#include<iostream>
using namespace std;
int a[1000010];
int main ()
{
    int n,ret,mmin,mmax;
    cin>>n;
    cin>>ret;
    a[ret]++;
    mmin=ret,mmax=ret;
    for(int i=1;i<=n-1;i++)
    {
        cin>>ret;
        a[ret]++;
        if(ret<mmin)
            mmin=ret;
        if(ret>mmax)
            mmax=ret;
    }
    printf("%d %d\n",mmin,a[mmin]);
    printf("%d %d\n",mmax,a[mmax]);
    return 0;
}