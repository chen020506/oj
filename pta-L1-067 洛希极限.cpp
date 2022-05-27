//  时间：2022.05.27 23点50分
#include<iostream>
using namespace std;
int main ()
{
    float a,b,d;
    int c;
    cin>>a>>c>>b;
    if(c==0)//流体
        d=a*2.455;
    else if(c==1)//刚体
        d=a*1.26;
    printf("%.2f ",d);
    if(b<d)//不会撕裂
        cout<<"T_T"<<endl;
    else if(b>d)//会撕裂
        cout<<"^_^"<<endl;
    return 0;
}