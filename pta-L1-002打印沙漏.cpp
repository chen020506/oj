#include<iostream>

using namespace std;

int main ()
{
    int n,row=0;
    char c;
    cin>>n>>c;
    //1、计算一共多少行
    int i=0;
    for(i=0;i<n;i++)
        if((2*i*(i+2)+1)>n)
            {
                row=i-1;
                break;
            }
    for(int i=row;i>=1;i--)
    {
        for(int k=row-i;k>=1;k--) cout<<" ";
        for(int j=i*2+1;j>=1;j--) cout<<c;
        cout<<endl; 
    }
    for(int i=0;i<row;i++) cout<<" ";
        cout<<c<<endl;
        for(int i=1;i<=row;i++){
            for(int k=row-i;k>=1;k--) cout<<" ";
            for(int j=i*2+1;j>=1;j--) cout<<c;
            cout<<endl;
        }

    cout<<(n-(2*row*(row+2)+1));
    return 0;
}