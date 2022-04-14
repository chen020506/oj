// 时间：2022.04.14 20点23分
#include<iostream>
#include<string.h>
#include<set>
using namespace std;

int main ()
{
    int y,n;
    cin>>y>>n;
    
    int ans=0;
    for(int i=y;i<3020;i++)//注意此处的范围，不能到3000就截至，因为y有可能取到3000
    // 当n等于2 结果为0 3000 当n等于3 结果为1 3001 当n等于4 结果为12 3012 
    //所以这里的循环必须大于等于3012，只取3000测试点2扣一分   
    {

        set<int>ms;

        int num=i;
         for(int j=0;j<4;j++)
        {
            ms.insert(num%10);//以此从个位往高位添加，且还可以自动加0
            num/=10;
        }
        if(ms.size()==n){
           printf("%d %04d\n",ans,i);
            break;}
        ans++;
    }
    return 0;
}