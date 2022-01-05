#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;
const int N=1000010;
int n,m;
int b[N];

int main()
{
    scanf("%d%d", &n, &m);
    while (m -- ){
        int l,r;
        scanf("%d%d",&l,&r);
        b[l]++,b[r+1]--;
    }
    for(int i=1;i<=n;i++) b[i]+=b[i-1];
    sort(b+1,b+n+1);
    printf("%d\n",b[n/2+1]);
    return 0;
}