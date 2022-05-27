//  时间:2022.05.27 23点54分
#include<iostream>
using namespace std;
int main ()
{
    int n;
    float ans;
    cin>>n;
    for(int i=1;i<=n;i++){
        float ret;
        cin>>ret;
        ans=ans+1.0/ret;
    }
    printf("%.2f\n",1/(ans/n));
    return 0;
}