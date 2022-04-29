// 来源：洛谷:P3367 
// 算法：并查集
// 时间：2022.04.29 23点11分
#include<iostream>
using namespace std;
int f[100010];
int find(int v)
{
    if(f[v]==v)
        return v;
    return f[v]=find(f[v]);
}
void merge(int x,int y)
{
    int t1,t2;
    t1=find(x);
    t2=find(y);
    if(t1!=t2)
        f[t2]=t1;
}
int main ()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        f[i]=i;
    while(m--)
    {
        int z,x,y;
        cin>>z>>x>>y;
        if(z==1)
        {
            merge(x,y);
        }
        else if(z==2)
        {
            if(find(x)==find(y))
                cout<<"Y"<<endl;
            else
                cout<<"N"<<endl;
        }
    }
    return 0;
}