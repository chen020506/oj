// 时间：2022.04.10 10点11分
// 思路：先统计字符串中需要输出字符个数，用一个数组顺序输出即可
#include<iostream>
#include<string>
using namespace std;

int arr[5];//arr[1]代表字符G的个数
int main ()
{

    string str;
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='G'||str[i]=='g')
            arr[1]++;
        if(str[i]=='P'||str[i]=='p')
            arr[2]++;
        if(str[i]=='L'||str[i]=='l')
            arr[3]++;
        if(str[i]=='T'||str[i]=='t')
            arr[4]++;
    }
    while(arr[1]!=0 || arr[2]!=0 || arr[3]!=0 || arr[4]!=0){//只要有一个字符还没有输出完就一直循环
        for(int i=1;i<=4;i++)
        {
            if(arr[1]!=0)
            {
                cout<<'G';
                arr[1]--;
            }
            if(arr[2]!=0)
            {
                cout<<'P';
                arr[2]--;
            }
            if(arr[3]!=0)
            {
                cout<<'L';
                arr[3]--;
            }
            if(arr[4]!=0)
            {
                cout<<'T';
                arr[4]--;
            }
        }
    }
    cout<<endl;
    return 0;
}