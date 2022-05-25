//  时间：2022.05.25   22点42分
#include<iostream>
using namespace std;
int main ()
{
    int pa,pb,t;
    int arr[2]={0};
    cin>>pa>>pb;
    for(int i=1;i<=3;i++){
        cin>>t;
        arr[t]++;
    }

    //a赢的情况
    if(pa>pb){
        if(arr[0]>=1)
            printf("The winner is a: %d + %d\n",pa,arr[0]);
    }
    else
        if(arr[0]==3)
            printf("The winner is a: %d + 3\n",pa);
    //b赢的情况
    if(pb>pa){
        if(arr[1]>=1)
            printf("The winner is b: %d + %d\n",pb,arr[1]);
    }
    else
        if(arr[1]==3)
            printf("The winner is b: %d + 3\n",pb);
    return 0;
}