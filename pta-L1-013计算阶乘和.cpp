#include<iostream>

using namespace std;
int func(int i)
{
    int sum=1;
    for(int j=i;j>=1;j--)
         sum*=j;
    return sum;
}
int main()
{
    int n,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++)
        sum+=func(i);
    cout<<sum<<endl;
    return 0;
}