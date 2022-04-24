#include<iostream>
#include<algorithm>
using namespace std;
int main ()
{
    int dis[10],i,k,n,m,u[10],v[10],w[10];
    int inf=99999999;
    cin>>n>>m;
    
    for(i=1;i<=m;i++)
        cin>>u[i]>>v[i]>>w[i];
    for(i=1;i<=n;i++)
        dis[i]=inf;
    dis[1]=0;
    
    //bellman-ford
    for(k=1;k<=n-1;k++)
        for(i=1;i<=m;i++)
            dis[v[i]]=min(dis[v[i]],dis[u[i]]+w[i]);
    
    for(i=1;i<=n;i++)
        cout<<dis[i]<<" ";
    cout<<endl;
    return 0;
}