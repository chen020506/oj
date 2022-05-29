//  时间：2022.05.29 12点29分
#include<iostream>
#include<string>
using namespace std;
int main ()
{
    string s1,s2;
    string a,b;
    cin>>a>>b;
    for (int i = 1; i < a.size(); i++)   {
        if (a[i] % 2 == a[i-1] % 2) {
            s1 += max(a[i], a[i-1]);
        }
    }
    
    for (int i = 1; i < b.size(); i++)   {
        if (b[i] % 2 == b[i-1] % 2) {
            s2 += max(b[i], b[i-1]);
        }
    }
    if(s1==s2)
        cout<<s1<<endl;
    else 
        cout<<s1<<endl<<s2<<endl;
    return 0;
}