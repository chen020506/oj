// 时间：2022.05.17 20点55分
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main ()
{
    int n,col;//col记录列数
    cin>>n;
    getchar();//吸收回车
    string str;
    getline(cin,str);
    //1、计算列数
    if(str.size()%n==0)//字符串的长度可以整除n和不能整除需要分情况讨论    
       col=str.size()/n;
    else{
        col=str.size()/n+1;
        //如果不能整除需要用空格进行补齐，空格的个数是计算的余数
        for(int i=0;i<str.size()%n;i++)
                str+=' ';
    }
    string arr[col];//记录切割后的字符串数组
    //2、切割字符串
    for(int i=0;i<col;i++){
        string temp;
        for(int j=i*n;j<i*n+n;j++)
            temp+=str[j];
        arr[i]=temp;
    }
    
    //已经把字符串分割为This| is |a te|st c|ase |共六份存入了字符串数组中
    
    //3、输出
    for(int i=0;i<n;i++){
        for(int j=col-1;j>=0;j--)
            cout<<arr[j][i];
        cout<<endl;
    }
    return 0;
}