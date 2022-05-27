//  时间：2022.05.27   23点07分
#include<iostream>
using namespace std;
int main ()
{
    int n,ss,hh,ww;
    cin>>n;
    while(n--){
        cin>>ss>>hh>>ww;
        if(ss==0){//女生的情况
            if(hh<129)
                cout<<"duo chi yu! ";
            if(hh>129)
                cout<<"ni li hai! ";
            if(hh==129)
                cout<<"wan mei! ";
            if(ww<25)
                cout<<"duo chi rou!"<<endl;
            if(ww>25)
                cout<<"shao chi rou!"<<endl;
            if(ww==25)
                cout<<"wan mei!"<<endl;
        }
        else if(ss==1){//男生情况
            if(hh<130)
                cout<<"duo chi yu! ";
            if(hh>130)
                cout<<"ni li hai! ";
            if(hh==130)
                cout<<"wan mei! ";
            if(ww<27)
                cout<<"duo chi rou!"<<endl;
            if(ww>27)
                cout<<"shao chi rou!"<<endl;
            if(ww==27)
                cout<<"wan mei!"<<endl;
        }
    }
    return 0;
}