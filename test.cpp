#include<iostream>
using namespace std;


int main ()
{
    int e[10][10],dis[10],book[10],i,j,n,m,t1,t2,t3,u,v,mmin;
    int inf=99999999;
    cin>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            if(i==j) e[i][j]=0;
            else e[i][j]=inf;
    for(i=1;i<=m;i++)
    {
        cin>>t1>>t2>>t3;
        e[t1][t2]=t3;
    }
    //初始化dis数组
    for(i=1;i<=n;i++)
        dis[i]=e[1][i];
    for(i=1;i<=n;i++)
        book[i]=0;
    book[1]=1;
    
    for(i=1;i<=n-1;i++)
    {
        mmin=inf;
        for(j=1;j<=n;j++)
        {
            if(book[j]==0&&dis[j]<mmin)
            {
                mmin=dis[j];
                u=j;
            }
        }
        book[u]=1;//u就是离1最近的一个点
        for(v=1;v<=n;v++)
        {
            if(e[u][v]<inf)
                dis[v]=min(dis[u]+e[u][v],dis[v]);
        }
    }
    for(i=1;i<=n;i++)
    {
        printf("%d ",dis[i]);
    }
    return 0;
}