//  时间：2022.05.26 23点28分
#include<iostream>
#include<string>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    while(n--){
        string str;
        cin>>str;
        if(str[0]+str[1]+str[2]==str[3]+str[4]+str[5])
            cout<<"You are lucky!"<<endl;
        else
            cout<<"Wish you good luck."<<endl;
    }
    return 0;
}