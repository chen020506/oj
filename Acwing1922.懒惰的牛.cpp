// 算法：前缀和 差分 双指针
// 时间：2022.07.13 23点17分
#include<iostream>
#include<algorithm>

#define x first
#define y second 
using namespace std;
typedef pair<int,int> PII;
const int N=100010;
int n,k;
PII q[N];
int main ()
{
    cin>>n>>k;
    for(int i=0;i<n;i++) scanf("%d%d",&q[i].y,&q[i].x);
    sort(q,q+n);
    
    int res=0,sum=0;
    for(int i=0,j=0;i<n;i++)
    {
        sum+=q[i].y;
        while(q[i].x-q[j].x>k*2) sum-=q[j++].y;
        res=max(res,sum);        
        
    }
    cout<<res<<endl;
    return 0;
}