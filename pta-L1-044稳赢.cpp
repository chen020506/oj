//时间：2022.05.17 23点45分
#include<iostream>
#include<string>
using namespace std;
int main ()
{
    string str;
    int n;
    cin>>n;
    while(1)
    {
        for(int i=1;i<=n+1;i++){//以n=1为周期循环
        cin>>str;
        if(str=="End")
            return 0;
            if(i==n+1){
                cout<<str<<endl;
                continue;}
            if(str=="ChuiZi")
                cout<<"Bu"<<endl;
            if(str=="Bu")
                cout<<"JianDao"<<endl;
            if(str=="JianDao")
                cout<<"ChuiZi"<<endl;
         }
    }
    return 0;
}