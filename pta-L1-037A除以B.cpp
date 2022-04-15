// 时间：2022.04.15 22点39分
#include<iostream>
using namespace std;
int main ()
{
    int a,b;
    cin>>a>>b;
    if(b==0)
        printf("%d/0=Error\n",a);
    if(b>0)
        printf("%d/%d=%.2f\n",a,b,a/(b*1.0));
    if(b<0)
        printf("%d/(%d)=%.2f\n",a,b,a/(b*1.0));
    return 0;
 
}