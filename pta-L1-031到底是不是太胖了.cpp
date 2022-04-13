// 时间：2022.04.13 22点48分
#include<iostream>
#include<cmath>
using namespace std;
int m;
void check(int h,float w)
{
    //计算标准体重
    float ww=(h-100)*0.9;

    //| 真实体重 − 标准体重 | < 标准体重×10%
    if(abs(ww-w)<(ww*0.1)){
        cout<<"You are wan mei!"<<endl;
        return;}
    if((w-ww)>=(ww*0.1)){
        cout<<"You are tai pang le!"<<endl;
        return;}
     if((ww-w)>=(ww*0.1)){
        cout<<"You are tai shou le!"<<endl;
         return;}
}
int main ()
{
    cin>>m;
    while(m--)
    {
        int h,w;//h代表身高，w代表体重
        cin>>h>>w;
        check(h,w/2.0);
    }
    return 0;
}