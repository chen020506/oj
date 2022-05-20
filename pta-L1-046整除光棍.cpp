//  时间：2022.05.20 17点10分
#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int arr[10];
int main ()
{
    int x;
    cin>>x;
    //第一种会超时
//     string str;
//     for(int i=1;;i++){//每次加一位1
//         str+='1';
//         stringstream ss;
//         ss<<str;
//         int ret;
//         ss>>ret;
//         if(ret%x==0){
//             cout<<ret/x<<" "<<str.size()<<endl;
//             return 0;}
//     }
    
    //第二种手算模拟
   int s=0,n=0;
    while(s<x){
        s=s*10+1;
        n++;//位数加一
    }
    while (1) {                 // 开始进行除法运算 
        printf("%d", s / x);    // 输出商, 从最高位一直输出到个位，因为最后一定能整除
        s %= x;                 // 被除数更新为余数 
        if (s == 0) break;      // 余数为0则结束 
        s = s * 10 + 1;         // 余数末位添1
        ++n;                    // 位数增1 
    }
    printf(" %d\n", n);
    return 0;
}
