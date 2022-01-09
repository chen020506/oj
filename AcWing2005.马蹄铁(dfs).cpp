// 时间：2022.1.9 15点10分 

#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;
const int N=10;

int n;
char g[N][N];
bool st[N][N];
int ans;//最后的答案

int dx[4]={-1,0,1,0},dy[4]={0,1,0,-1};
void dfs(int x,int y,int l,int r)
{
    st[x][y]=true;//标记一下被搜过了
    if(l==r)//当左右括号数相等的时候则找到一个子串
     {
         ans=max(ans,l+r);
         st[x][y]=false;//恢复现场
         return ;
     }
     
     for(int i=0;i<4;i++)//每个点可以向四个方位暴搜
     {
         int a=x+dx[i],b=y+dy[i];
         if(a>=0&&a<n&&b>=0&&b<n&&!st[a][b])//a,b点没有出界并且没有被搜过
        {
            if(g[x][y]==')'&&g[a][b]=='(')//只有这种情况是不合法的
                continue;
            if(g[a][b]=='(') dfs(a,b,l+1,r);
            else dfs(a,b,l,r+1);
                
        }
     }
     st[x][y]=false;
}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++) cin>>g[i];
    
    if(g[0][0]=='(')//排除第一个点是右括号
        dfs(0,0,1,0);//从左上角开始搜索，此时左括号一个，右括号零个
    cout<<ans<<endl;
    return 0;
}
