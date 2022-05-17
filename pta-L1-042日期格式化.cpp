//  时间：2022.05.17 21点29分
#include<iostream>
using namespace std;
int main ()
{
    int yy,mm,dd;
    scanf("%d-%d-%d",&mm,&dd,&yy);
    printf("%d-%02d-%02d\n",yy,mm,dd);//唯一需要注意的地方是这里的需要补0
    return 0;
}