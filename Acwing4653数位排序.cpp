//  时间：2023.01.05  21点17分 
#include<iostream>
#include<algorithm>
using namespace std;
const int N=1e6+10;
struct node{
    int x,y;
}a[N];
bool cmp(node a,node b)
{
    if(a.y!=b.y)return a.y<b.y;
    return a.x<b.x;
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        a[i].x=i;
        int t=i;
        while(t){
            a[i].y+=t%10;
            t/=10;
        }
    }
    sort(a+1,a+1+n,cmp);
    cout<<a[m].x;
}       



