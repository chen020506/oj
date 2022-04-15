// 时间：2022.04.15 22点24分
#include<iostream>
#include<vector>
#include<string>
using namespace std;
vector<string>mv;
int main ()
{
    string str;
    while(1){
        str.clear();
        cin>>str;
        if(str[0]=='.')
            break;
        mv.push_back(str);
    }
    if(mv.size()>=14){//存在A和B
        cout<<mv[1]<<" and "<<mv[13]<<" are inviting you to dinner..."<<endl;
        return 0;
    }
    if(mv.size()>=2 && mv.size()<13){//只有A没有B
        cout<<mv[1]<<" is the only one for you..."<<endl;
        return 0;
    }
    if(mv.size()<2){//连A都没有
    cout<<"Momo... No one is for you ..."<<endl;
    }
    return 0;
}