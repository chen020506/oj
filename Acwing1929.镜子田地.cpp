//  算法：环图 最长路 图的遍历
//  时间：2022.07.13 21点59分
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int N=1010;
int n,m;
char g[N][N];
int dx[4]={-1,0,1,0},dy[4]={0,1,0,-1};
int dfs(int x,int y,int d)
{
    if(x<0||x>=n||y<0||y>=m) return 0;
    if(g[x][y]=='/') d^=1;
    else d^=3;
    
    return dfs(x+dx[d],y+dy[d],d)+1;
}
int main ()
{
    cin>>n>>m;
    for(int i=0;i<n;i++) scanf("%s",g[i]);
    
    int res=0;
    for(int i=0;i<n;i++)
    {
        res=max(res,dfs(i,0,1));
        res=max(res,dfs(i,m-1,3));
    }
    
    for(int i=0;i<m;i++)
    {
        res=max(res,dfs(0,i,2));
        res=max(res,dfs(n-1,i,0));
    }
    cout<<res<<endl;
    return 0;
}