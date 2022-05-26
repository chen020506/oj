//  时间：2022.05.26  22点07分
#include<iostream>
#include<string>
using namespace std;

int main ()
{
    string str;
    getline(cin,str);
    int i=0,cnt=0;
    int l=str.size();
    while(i<l){
        if(str[i]!='6')//不是6则直接输出
            cout<<str[i++];
        else{
            for(cnt=0;i<l&&str[i]=='6';i++,cnt++);//计算连续的几个6
            if(cnt>9) cout<<27;
            else if(cnt>3) cout<<9;//连续的6的个数大于3但是没超过9个
            else while(cnt-->0)cout<<6;//没超过3个则输出cnt个6即可
        }
    }
    return 0;
}