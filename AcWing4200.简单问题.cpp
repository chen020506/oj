// 时间：2021.12.26 20点56分
// 来源：AcWing 31场周赛 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int a,b,p1,p2,p3,p4;
    cin>>p1>>p2>>p3>>p4>>a>>b;
    //第一步找出p1~4中的最小值
    vector<int>p;
    p.push_back(p1);
    p.push_back(p2);
    p.push_back(p3);
    p.push_back(p4);
    sort(p.begin(),p.end());
    if(a>p[0])//先进行一次特判，a到b中没有比p中最小值还小的
        cout<<0<<endl;
    else
        cout<<min(b,p[0]-1)-a+1<<endl;
    return 0;
}
