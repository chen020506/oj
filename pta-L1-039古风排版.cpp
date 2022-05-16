// 时间：2022.05.16 23点37分
#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
vector<stack<char> >mv;
int main ()
{
    int n;
    string str;
    cin>>n;
    getchar();//吸收掉回车键
    getline(cin,str);

    //计算一共多少行，首先找出空格的个数
    int num = count(str.begin(),str.end(),' ');
    int ret;
    if((str.size()-num)%n==0)//每行刚好够n个
        ret=(str.size()-num)/n;
    else    
        ret=(str.size()-num)/n+1;
        
    int i=0;
    for(int j=0;j<ret;j++){
        if(i<str.size())
            mv[j].push(str[i++]);
        }
    
    //输出
    for(int i=0;i<ret;i++){
        for(int j=mv[i].size()-1;j>=0;j--){
            cout<<mv[i].top();
            mv[i].pop();
        }
        cout<<endl;
    }
  return 0;

}