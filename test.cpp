
#include<iostream>
#include<algorithm>
using namespace std;

int arr[10][10];
bool book[10];
int dist[10];
int main ()
{
    int n,m,i,j;
    cin>>n>>m;
    for( i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            if(i==j)
                arr[i][j]=0;
            else
                arr[i][j]=99999999;
    
    while(m--){
        int a,b,c;
        cin>>a>>b>>c;
        arr[a][b]=c; 
    }
    
    for(i=1;i<=n;i++)
        dist[i]=arr[1][i];
    book[1]=true;
    //dijkatra
    for(i=1;i<=n-1;i++){//n-1次循环
        //每次先找到最小的没确定最短距离的点
        int k,inf=99999999;
        for(j=2;j<=n;j++)
            if(dist[j]<inf&&book[j]==false)
            {
                k=j;
                inf=dist[j];
            }
    //将这个点确定为最短点
    book[k]=true;
    for(j=2;j<=n;j++)
        //if(arr[k][j]<99999999)
            dist[j]=min(dist[j],dist[k]+arr[k][j]);
    }
    for(int i=1;i<=n;i++)
        cout<<dist[i]<<" ";
    cout<<endl;
    return 0;
}