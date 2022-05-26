//  时间：2022.05.26 23点24分
#include<iostream>
using namespace std;
int main ()
{
    int x,y;
    cin>>x>>y;
    //心理阴影的面积等于正方形的一半减去两个三角形的面积
    cout<<5000-(100*y)/2-(100*(100-x))/2<<endl;
    return 0;
}