// 来源：洛谷
// 算法：并查集
// 时间：2022.04.30 22点12分
#include<iostream>
using namespace std;
int f[5010];

void init(int n)
{
    for(int i=1;i<=n;i++)
        f[i]=i;
}
int getf(int v)
{
    if(f[v]==v)
        return v;
    else
        return f[v]=getf(f[v]);
}
void merge(int a,int b)
{
    int t1,t2;
    t1=getf(a);
    t2=getf(b);
    if(t1!=t2)
        f[t2]=t1;
}
int main ()
{
    int n,m,p;
    cin>>n>>m>>p;
    init(n);
    while(m--)
    {
        int a,b;
        cin>>a>>b;
        merge(a,b);
    }
    while(p--)
    {
        int a,b;
        cin>>a>>b;
        if(getf(a)==getf(b))
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }

    return 0;
}