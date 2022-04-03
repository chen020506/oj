// 时间:2022.04.03 15点50分
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    vector<string>s;
    s.push_back("ling");
    s.push_back("yi");
    s.push_back("er");
    s.push_back("san");
    s.push_back("si");
    s.push_back("wu");
    s.push_back("liu");
    s.push_back("qi");
    s.push_back("ba");
    s.push_back("jiu");
    
    string n;
    cin>>n;
    int i=1;
    if(n[0]=='-'){
        printf("fu");
    }
    else{
        cout<<s[n[0]-'0'];
    } 
    for(i;i<n.size();i++){
        cout<<" "<<s[n[i]-'0'];
    }
    return 0;
}