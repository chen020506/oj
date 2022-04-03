// 时间：2022.04.03 18点57分
#include<iostream>
#include<algorithm>
using namespace std;

int  main()
{
    int a,b,c;
    cin>>a>>b>>c;
    
    int mmin=min(a,b);
    mmin=min(mmin,c);

    int mmax=max(a,b);
    mmax=max(mmax,c);
        
    int mmid;
    if(a>mmin&&a<mmax)
        mmid=a;
    if(b>mmin&&b<mmax)
        mmid=b;
    if(c>mmin&&c<mmax)
        mmid=c;
    
    cout<<mmin<<"->"<<mmid<<"->"<<mmax<<endl;
    return 0;
}