// 时间：2022.04.13 23点27分
#include<iostream>
#include<string>
using namespace std;
int n;
char c;
string str;
int main ()
{
    //cin>>n>>c;
    scanf("%d %c",&n,&c);
    getchar();//www,没加这个导致一直无法读入字符串，需要用这个来吸收之前的换行符
    getline(cin,str);
    //cout<<"n:"<<n<<" c:"<<c<<" str:"<<str.size()<<endl;
    //cout<<str<<endl;
    if(n==str.size())//不用填充的情况-原样输出即可
    {
        cout<<str<<endl;
    }
    if(n<str.size())//不用填充的情况-需要进行截断
    {
        for(int i=str.size()-n;i<str.size();i++)
            cout<<str[i];
        cout<<endl;
    }
    if(n>str.size())//需要进行填充
    {

        for(int i=1;i<=(n-str.size());i++)
            cout<<c;
        for(int i=0;i<str.size();i++)
            cout<<str[i];
        cout<<endl;
    }
    return 0;
}