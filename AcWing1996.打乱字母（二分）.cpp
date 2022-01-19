// 时间：2022.1.12 19点54分 
#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;
const int N=50010;
int n;
string a[N],b[N],c[N];//a是原字符串，b是将每个数取到最大值排序之后的结果，c是最小值排序的结果

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        b[i]=c[i]=a[i];
        sort(b[i].begin(),b[i].end(),greater<char>());//从大到小排序
        sort(c[i].begin(),c[i].end());
    }
    
    sort(b+1,b+n+1);
    sort(c+1,c+n+1);
    
    for(int i=1;i<=n;i++)
    {
        sort(a[i].begin(),a[i].end());
        int l=1,r=n;
        while(l<r)
        {
            int mid=l+r>>1;
            if(b[mid]>=a[i]) r=mid;
            else l=mid+1;
        }
        cout<<r<<" ";
        reverse(a[i].begin(),a[i].end());
        l=1,r=n;
        while(l<r)
        {
            int mid=l+r+1>>1;
            if(c[mid]<=a[i]) l=mid;
            else r=mid-1;
        }
        cout<<r<<endl;
    }
    
    return 0;
}
