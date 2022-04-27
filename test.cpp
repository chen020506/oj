#include<iostream>
using namespace std;
int f[100];

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
    int n,m;
    int sum=0;
    cin>>n>>m;
    init(n);
    while(m--)
    {
        int a,b;
        cin>>a>>b;
        merge(a,b);
    }
    for(int i=1;i<=n;i++)
        if(f[i]==i)
            sum++;
    cout<<sum<<endl;
    return 0;
}