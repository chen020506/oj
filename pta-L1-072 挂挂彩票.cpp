// 时间：2022.05.30 21点19分
#include<iostream>
using namespace std;
int a[4][4];
int book[10]={0};//标记数组，用来找到九宫格中0那个位置上的数字
int b[20]={10000,36,720,360,80,252,108,72,54,180,72,180,119,36,306,1080,144,1800,3600};
int main ()
{
    int i,j,x,y,ret;
    for(i=1;i<=3;i++)
        for(j=1;j<=3;j++){
            cin>>a[i][j];
            book[a[i][j]]++;//标记这个数字已经出现了
            if(a[i][j]==0)
            {x=i,y=j;}//记录一下0的坐标
        }
    //将0的位置填充上缺失的数
    for( i=1;i<=9;i++)
        if(book[i]==0)//i在九宫格没出现过
            a[x][y]=i;
    for(i=1;i<=3;i++){
        cin>>x>>y;
        cout<<a[x][y]<<endl;
    }
    cin>>ret;
    int num=0;
    if(ret>=1&&ret<=3)//选择行
        for(i=1;i<=3;i++)
            num+=a[ret][i];
    else if(ret>=4&&ret<=6)//选择列 注意此时ret需要减3
        for(i=1;i<=3;i++)
            num+=a[i][ret-3];
    else if(ret==7)
        num=a[1][1]+a[2][2]+a[3][3];
    else if(ret==8)
        num=a[1][3]+a[2][2]+a[3][1];
    cout<<b[num-6]<<endl;
    return 0;
}