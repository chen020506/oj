// 时间：2022.2.5 23点22分
#include<iostream>
#include<cstring>
#include<algorithm>
#include<map>

using namespace std;

const int INF=2e9;
int n,x,y,z;

int main ()
{
    cin>>n>>x>>y>>z;
    map<int,int>b;
    for(int i=0;i<n;i++)
    {
        int l,r;
        scanf("%d%d",&l,&r);
        //每次三个区间inf~l-1,l~r,r+1~inf
        b[-INF]+=x;
        b[l]-=x;
        b[l]+=y;
        b[r+1]-=y;
        b[r+1]+=z;
        b[INF]-=z;
    }
    int res=0,sum=0;
    for(auto&[k,v]:b)
    {
        sum+=v;
        res=max(res,sum);
    }
    cout<<res<<endl;
    return 0;
}