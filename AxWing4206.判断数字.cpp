// 时间：2022.1.8 21点04分 
// 来源：AcWing 第33场周赛第一题 
#include<iostream>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int cnt=0;
    for(auto x:str)
    if(x=='4'||x=='7')
        cnt++;
   
    if(cnt==4||cnt==7)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
        
}
