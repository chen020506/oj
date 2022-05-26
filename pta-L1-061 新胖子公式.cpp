//  时间：2022.05.26  23点17分
#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    float hh,ww;
    cin>>ww>>hh;
    float ret=ww/(pow(hh,2));
    printf("%.1f\n",ret);
    if(ret>25)
        cout<<"PANG"<<endl;
    else
        cout<<"Hai Xing"<<endl;
    return 0;
}