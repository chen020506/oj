// 时间：2022.04.02 23点47分

//第一次答案最后一个测试点无法通过是因为int类型无法存储1000位的数，所以需要换成string类型
// #include<iostream>
// using namespace std;
// int n,a[10];
// int main ()
// {
//     cin>>n;
//     while(n>0)
//     {
//         int b=n%10;
//         a[b]++;
//         n=n/10;
//     }
//     for(int i=0;i<10;i++)
//     {
//         if(a[i]!=0)
//         {
//             printf("%d:%d\n",i,a[i]);
//         }
//     }
//     return 0;
// }
#include<iostream>
#include<string>
using namespace std;

int a[10];//这个数组用来记录输入数字中每个数字出现的次数a[1]=2表示数字1出现了两次
string str;
int main ()
{
    cin>>str;
    for (int i = 0; i < str.size(); i++)
	{
		a[str[i]-48]++; //由于输入的是字符所以需要将字符转换成数字
	}
    for(int i=0;i<10;i++)
    {
        if(a[i]!=0)
        {
            printf("%d:%d\n",i,a[i]);
        }
    }
    return 0;
}