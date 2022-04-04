#include<iostream>
using namespace std;

int main ()
{
    int n;
    char c;
    scanf("%d %c",&n,&c);
    //判断n的奇偶性
    if(n%2==0){
    for(int i=1;i<=n/2;i++){
        for(int j=1;j<=n;j++)
            printf("%c",c);
        cout<<endl;
        }
    }
    else
     for(int i=1;i<=n/2+1;i++){//如果为奇数行数需要加一
        for(int j=1;j<=n;j++)
        printf("%c",c);
    cout<<endl;
    }
    return 0;
}