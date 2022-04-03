// 时间：2022.04.03 16点02分
#include<iostream>
using namespace std;

int main ()
{
    int a,b;
    cin>>a>>b;
    int k=0,sum=0;
    for(int i=a;i<=b;i++)
    {
        printf("%5d",i);
        k++;
        sum+=i;
        if(k%5==0)
            cout<<endl;
    }
    if(k%5!=0)//如果输出所有的整数之后，未到行尾则输出一个换行符
        cout<<endl;
    printf("Sum = %d\n",sum);
    return 0;
}