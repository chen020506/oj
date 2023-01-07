//  时间：2023.1.7  15点46分
#include<bits/stdc++.h>
using namespace std;

typedef long long LL;
const int N=100010;
int n,m;
int w[N],s[N];

int main ()
{
    cin>>n;
    for(int i=1;i<=n;i++) cin>>w[i];
    cin>>m;
    while(m--){
        int l,r;
        cin>>l>>r;
        s[l]++,s[r+1]--;
    }
    for(int i=1;i<=n;i++)
        s[i]+=s[i-1];
    LL sum1=0;
    for(int i=1;i<=n;i++)
        sum1+=(LL)s[i]*w[i];
    LL sum2=0;
    sort(s+1,s+1+n);
    sort(w+1,w+n+1);
    for(int i=1;i<=n;i++)
        sum2+=(LL)s[i]*w[i];
    
    printf("%lld\n",sum2-sum1);
    return 0;
}