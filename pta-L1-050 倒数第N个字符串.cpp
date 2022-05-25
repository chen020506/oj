//  时间：2022.05.15 21点37分
//  这个题很简单，将字符串类别成26进制的数就行
#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    int l,n;
    cin>>l>>n;
    //l位的字符串的序列总数为pow(26,l),倒数N，则正向数为pow(26,l)-N
    //将正数的数以26进制写出来
    int ret=pow(26,l)-n;
    char a[7];//最多六个字符
    for(int i=l-1;i>=0;i--){
       a[i]='a'+ret%26;
		ret/=26;
    }
    for(int i=0;i<l;i++)
        cout<<a[i];
    cout<<endl;
    return 0;
}