// 时间：2022.04.04 18点51分
#include<iostream>
#include<string>
using namespace std;
int n;
char arr[]={"10X98765432"};//校验码数组
int brr[]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};//权位数组
int main ()
{
    cin>>n;
    bool ret=true;//标志位，如果有错误的身份证号则变为false
    string str;
    while(n--)
    {
        str.clear();
        cin>>str;
        int ans=0;
        //每个位的权重：7，9，10，5，8，4，2，1，6，3，7，9，10，5，8，4，2

        for(int i=0;i<=16;i++)
            ans+=(str[i]-'0')*brr[i];
        ans%=11;
        if(str[17]!=arr[ans]){
            cout<<str<<endl;
            ret=false;
        }
        //校验码
        //Z：0 1 2 3 4 5 6 7 8 9 10
        //M：1 0 X 9 8 7 6 5 4 3 2

    }
    if(ret)
        cout<<"All passed"<<endl;
    return 0;
}