//  时间：2022.05.29 00点33分
#include<iostream>
using namespace std;
int func(int n){
    if(n==1)
        return 1;
    return n*func(n-1);
}
int main ()
{
    int a,b,c;
    cin>>a>>b;
    cout<<func(a+b);
    return 0;
}