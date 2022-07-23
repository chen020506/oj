//  时间：2022.07.23  20点51分
//  来源：Acwing第61场周赛第二题
//  简单dfs，我没写出来来，结束了自己才想出来
#include<iostream>
#include<cmath>
using namespace std;
int a[20];
int n;
bool flag=false;
void dfs(int u,int r)
{
    if(u>n) 
    {
        if(r==0) flag=true;
        //if(r!=0) cout<<"NO"<<endl;
        return;
    }
    dfs(u+1,(r+a[u])%360);//顺时针
    dfs(u+1,(r+360-a[u])%360);
}
int main ()
{

    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    dfs(1,0);
    if(flag) {
        cout<<"YES"<<endl;
        return 0;}
    else cout<<"NO"<<endl;
}