// 时间：2022.05.29 12点12分
#include<iostream>
using namespace std;
int a[7][7];
int main ()
{
     for(int i=1;i<=6;i++){
        int t;
        cin>>t;
        a[i][t]=1;
    }
    int n;
    cin>>n;
    while(n--){//摇n次
        for(int i=1;i<=6;i++)
            for(int j=6;j>0;j--){
                if(n==0&&a[i][j]==0&&i==1)//如果是最后一次摇，找到摇的点数并输出（每行第一个数字不加空格）
                {cout<<j; break;}
                if(n==0&&a[i][j]==0)//最后一次摇，输出点数，需要加空格
                {cout<<" "<<j; break;}
                if(a[i][j]==0)//如果不是最后一次，则只需要掷骰子即可
                {
                    a[i][j]=1;
                    break;
                }
            }
    }

    return 0;
}