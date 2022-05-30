// 时间：2022.05.30 20点24分
//看作二进制，y为0，n为1，二进制转十进制
#include<iostream>
#include<string>
using namespace std;
int main ()
{
    int n,m;
    string str;
    cin>>n>>m;
    while(m--){
        cin>>str;
        int num=0;
        int ret=1;
        //y看成0，n看成1
        for(int i=str.size()-1;i>=0;i--)
        {
            if(str[i]=='n')//如果这一位是’1‘
                num=num+1*ret;
            ret*=2;//二进制进位
        }
        cout<<num+1<<endl;//这里加一是因为结论是从1开始的
        //当回答是nnn时，算出来的十进制是0所以需要加一
    }
    return 0;
}