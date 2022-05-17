// 时间：2022.05.17 21点04分
#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    while(n--)
    {
        char op[2];
        float h;
        cin>>op>>h;
        //cout<<op<<" "<<h<<endl;
        //女方的身高）×1.09 =（男方的身高）
        if(*op=='F'){//查询的是女生
            printf("%.2f\n",h*1.09);
        }
        else if(*op=='M'){//查询的是男生
            printf("%.2f\n",h/1.09);
        }
    }
    return 0;
}