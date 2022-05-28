//  时间：2022.05.28 23点49分
#include<iostream>
using namespace std;
int main()
{
    string str;
    cin>>str;
    if(str.size()==4){
        if(str[0]>'2'||(str[0]=='2'&&str[1]>='2'))//大于22
            cout<<"19"<<str[0]<<str[1]<<"-"<<str[2]<<str[3];
        else 
            cout<<"20"<<str[0]<<str[1]<<"-"<<str[2]<<str[3];
    }
    else if(str.size()==6){
        cout<<str[0]<<str[1]<<str[2]<<str[3]<<"-"<<str[4]<<str[5];
    }
    return 0;
}