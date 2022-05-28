//  时间：2022.05.29 00点16分
#include<iostream>
using namespace std;
int main ()
{
    int arr[25];
    for(int i=0;i<24;i++)
        cin>>arr[i];

    while(1){
        int ret;
        cin>>ret;
       // cout<<ret<<endl;
        if(ret<0||ret>23)
            break;
        if(arr[ret]>50)
            cout<<arr[ret]<<" "<<"Yes"<<endl;
        if(arr[ret]<=50)
            cout<<arr[ret]<<" "<<"No"<<endl;
    }
    return 0;
}