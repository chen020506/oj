// 时间：2022.04.05 15点42分
#include<iostream>
using namespace std;
int n,j_sum,o_sum;
int main ()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int ret;
        cin>>ret;
        if(ret%2==0)
            o_sum++;
        else
            j_sum++;
    }
    cout<<j_sum<<" "<<o_sum<<endl;
    
    return 0;
}