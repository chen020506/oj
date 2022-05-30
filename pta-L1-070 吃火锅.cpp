// 时间：2022.05.30 19点59分
//每一条信息接收一次，因为可能存在空格，因此不能使用scanf()函数接收，应使用gets()函数
//每一条信息只判断是否存在字串，不需要判断存在几个字串 (测试点 2)
//单独的 . 是结束标志，但可能存在 . 开头的信息，此时没有结束，仍需进行判断，并继续接收下一条信息 (测试点 3)
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main ()
{
    string str;
    int i=0,j=0,k=0;//i~朋友信息条数 j~第一次出现的编号 k~出现信息的总条数
    while(1){
        getline(cin,str);
        //下面这条语句一定要小心，单独的.是结束标志，
        //但是字符串以.开始是被允许的，导致我第一次测试点3没过
        if(str[0]=='.'&&str.size()==1)//如果结束则退出  
            break;
        i++;//朋友信息条数加一
        
        //查找这个字符串中是否含有吃火锅
        int ret=str.find("chi1 huo3 guo1");
        if(ret!=-1){//如果找到了
            if(j==0)//如果是第一次找到，则需要用j记录一下
                j=i;
            k++;
        }
    }
    cout<<i<<endl;
    if(k==0)//如果吃火锅一直没出现
        cout<<"-_-#"<<endl;
    else
        cout<<j<<" "<<k<<endl;
    return 0;
}
