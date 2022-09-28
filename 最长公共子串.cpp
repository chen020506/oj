// 时间：2022.09.28 21点07分
#include<bits/stdc++.h>
using namespace std;
int f[100][100];
int main ()
{
    string a,b;
    cin>>a>>b;
    int mmax=-1;
    for(int i=1;i<=a.size();i++){
        for(int j=1;j<=b.size();j++){
            if(a[i-1]==b[j-1])//注意此时下标
                f[i][j]=f[i-1][j-1]+1;
            else f[i][j]=0;
            if(f[i][j]>mmax) mmax=f[i][j];
            //在更新f数组的同时就可以将最大值找到
        }
    }
    cout<<mmax<<endl;
    return 0;
}
