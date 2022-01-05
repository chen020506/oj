#include<iostream>
#include<cstring>
#include<algorithm>
#include <unordered_set>

using namespace std;
int get(string s,int b)//将b进制的数转换为十进制
{
    int res=0;
    //秦九韶算法
    for(auto c:s)
        res=res*b+c-'0';//减0是为了将ASCII码转换为数字
    return res; 
}
int main()
{
    string a,b;
    cin>>a>>b;
    unordered_set<int>S;
    //枚举一下和A只有一位不同的数并放到set里面
    for(auto &c:a){ //用引用的目的是当c变化时a也跟着变
        c^=1;//1^1为0，0^1为1，刚好实现每一位取反操作
        S.insert(get(a,2));//每次插入进去的是10进制数
        c^=1;//每次插入进去后，记得将那一位变回来
    }
    //枚举一下和B只有一位不同的数并放到set里面
    for(auto&c:b){
        char t=c;
        for(int i=0;i<3;i++)
            if(i+'0'!=t){
                c=i+'0';
                int x=get(b,3);
                if(S.count(x)){
                    cout<<x<<endl;
                    return 0;
                }
            }
            c=t;
    }
    return 0;  
}