//  时间：2022.05.25   22点31分
#include<iostream>
using namespace std;
char arr[101][101];//输入的字符数组
char brr[101][101];//输出的字符数组
int main ()
{
    int n;
    char c;
    cin>>c>>n;
    getchar();//吸收掉第一行行末的回车
    for(int i=1;i<=n;i++){
      for(int j=1;j<=n;j++)
          scanf("%c",&arr[i][j]);
      getchar();//吸收掉每一行行末的回车
    }
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
            if(arr[n-i+1][n-j+1]==' ')//唯一需要推导的关系
                brr[i][j]=' ';
            else
                brr[i][j]=c;
    }
    //先判断倒过去是不是一样的
    int flag=0;
   for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            if((arr[i][j]==' '&&brr[i][j]!=' ')||(arr[i][j]!=' '&&brr[i][j]==' '))
            {
                flag=1;
                break;
            }
    if(flag==0)
        cout<<"bu yong dao le"<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
            cout<<brr[i][j];
        cout<<endl;
    }
 
    return 0;
}