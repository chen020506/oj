//  时间：2022.05.30 21点59分
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main ()
{
    int n,m;
    int j=0;//记录做完了几道题
    cin>>n>>m;
    string a[31];
    getchar();
    for(int i=1;i<=n;i++){
        getline(cin,a[i]);

        //如果发现了简单题，则进行跳过
        if((a[i].find("qiandao")!=-1)||(a[i].find("easy")!=-1))
            continue;
        //先判断是否满足做完了m道题 如果满足那么此时输入的题就是正在做的题
        if(j==m){
         cout<<a[i]<<endl;
         return 0;
        } 
        //如果不是简单题则做题数加一
        j++;
    }
    //如果吉老师已经把所有他打算做的题目做完了，输出一行 Wo AK le。
    cout<<"Wo AK le"<<endl;
    return 0;
}