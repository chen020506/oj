// 时间：2022.04.04 19点19分
#include<iostream>
#include<string>
using namespace std;

int main ()
{
    string str;
    cin>>str;
    int count=0,cnt=0;//count表示这个数中有几个数字2，cnt记录这个数的有效位数
    bool ret=false;//负数标志位初始化为正数
    //先找出这个数有几个数字2
    for(int i=0;i<str.size();i++)
        if(str[i]-'0'==2)
            count++;
    //判断是否为负数
    if(str[0]=='-')
        ret=true;
    float ans=0;
    if(ret)//为负数的情况
    {
        cnt=str.size()-1;
        ans=((float)count/cnt)*1.5;
        if(str[str.size()-1]-'0'==0//判断奇偶性
          ||str[str.size()-1]-'0'==2
          ||str[str.size()-1]-'0'==4
          ||str[str.size()-1]-'0'==6
          ||str[str.size()-1]-'0'==8)
            ans*=2;
            
    }
    else{//正数的情况
        cnt=str.size();
       
        ans=((float)count/cnt);
        if(str[str.size()-1]-'0'==0
          ||str[str.size()-1]-'0'==2
          ||str[str.size()-1]-'0'==4
          ||str[str.size()-1]-'0'==6
          ||str[str.size()-1]-'0'==8)
            ans*=2;
    }
    
    printf("%.2f%%\n",ans*100);
    return 0;
}