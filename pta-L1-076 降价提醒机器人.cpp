// 时间：2022.05.28 23点57分
#include<iostream>
using namespace std;
int main ()
{
    int n,ret;
    cin>>n>>ret;
    while(n--){
        float t;
        cin>>t;
        if(t<ret)
            printf("On Sale! %.1f\n",t);
    }
    return 0;
}