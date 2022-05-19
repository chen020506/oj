//  时间：2022.05.19 21点36分
#include<iostream>
using namespace std;
int a[101][101];//矩阵A
int b[101][101];//矩阵B
int c[101][101];//A和B相乘的结果矩阵
int main ()
{
    int x,y;//A矩阵的行数和列数
    int i,j;
    cin>>x>>y;
    for(i=1;i<=x;i++)
        for(j=1;j<=y;j++)
            cin>>a[i][j];
    int x2,y2;//B矩阵的行数和列数
    cin>>x2>>y2;
    for(i=1;i<=x2;i++)
        for(j=1;j<=y2;j++)
            cin>>b[i][j];
    if(y!=x2){//如果不匹配
        printf("Error: %d != %d",y,x2);
        return 0;
    }
    for(i=1;i<=x;i++)
        for(j=1;j<=y2;j++)
        {
            int sum=0;
            for(int k=1;k<=y;k++)
                sum+=a[i][k]*b[k][j];
            c[i][j]=sum;
        }
    cout<<x<<" "<<y2<<endl;
   
    for(i=1;i<=x;i++){
        for(j=1;j<=y2;j++){
            if(j==y2){//每一行最后一个
                cout<<c[i][j];
                continue;
            }
            cout<<c[i][j]<<" ";
        }
    cout<<endl;
}
    return 0;
}