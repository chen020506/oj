// 算法：二路归并
// 时间：2022.2.24 23点16分
#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>

using namespace std;

const int N=10010;
int n;
vector<int> a,b;

int main()
{
    scanf("%d",&n);
    char str[2];
    int x;
    while(n--)
    {
        scanf("%s%d",str,&x);
        if(*str=='T') a.push_back(x);
        else b.push_back(x);
    }

    b.push_back(1000);
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    double t=0,s=0,v=1;//v 是速度的倒数
    int i=0,j=0;
    while(i<a.size()||j<b.size())
        if(j==b.size()||i<a.size()&&a[i]-t<(b[j]-s)*v)
        {
            s+=(a[i]-t)/v;
            t=a[i];
            v++;
            i++;
        }
        else
        {
            t+=(b[j]-s) *v;
            s=b[j];
            v++;
            j++;
        }
        printf("%.0lf\n",t);
        return 0;
    
}
