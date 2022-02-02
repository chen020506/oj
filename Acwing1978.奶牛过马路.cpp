// 时间：2022.2.2 22点12分
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

const int N=1e5+10;
#define x first
#define y second
typedef pair<int,int> PII;

PII q[N];
int n,INF=1e8;
int smax[N],smin[N];

int main ()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++) scanf("%d%d",&q[i].x,&q[i].y);
    sort(q+1,q+1+n);
    
    smax[0]=-INF,smin[n+1]=INF;
    for(int i=1;i<=n;i++) smax[i]=max(smax[i-1],q[i].y);
    for(int i=n;i;i--) smin[i]=min(smin[i+1],q[i].y);
    int res=0;
    for(int i=1;i<=n;i++)
        if(smax[i-1]<q[i].y&&smin[i+1]>q[i].y)
            res++;
            
    printf("%d\n",res);
    return 0;
}#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

const int N=1e5+10;
#define x first
#define y second
typedef pair<int,int> PII;

PII q[N];
int n,INF=1e8;
int smax[N],smin[N];

int main ()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++) scanf("%d%d",&q[i].x,&q[i].y);
    sort(q+1,q+1+n);
    
    smax[0]=-INF,smin[n+1]=INF;
    for(int i=1;i<=n;i++) smax[i]=max(smax[i-1],q[i].y);
    for(int i=n;i;i--) smin[i]=min(smin[i+1],q[i].y);
    int res=0;
    for(int i=1;i<=n;i++)
        if(smax[i-1]<q[i].y&&smin[i+1]>q[i].y)
            res++;
            
    printf("%d\n",res);
    return 0;
}