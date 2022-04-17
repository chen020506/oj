#include<iostream>
#include<string>
using namespace std;
char a[1010][1010];

int main ()
{
    int n;
    cin>>n;
    getchar();
    string str;
    getline(cin,str);
   //先计算一下一共会有多少行
    int k=0;
    int m=str.size()/n;
    for(int j=n;j>=1;j--)//从右往左
        for(int i=1;i<=m;i++)//从上往下
        {
            a[j][i]=str[k];
            k++;
        }
    for(int i=1;i<=m+10;i++){
        for(int j=1;j<n+10;j++)
            if(a[i][j]!='0')
                cout<<a[i][j];
        cout<<endl;
    }
        
    return 0;
}