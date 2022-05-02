#include<iostream>
#include<algorithm>
using namespace std;
int h[100];
int n;

void siftdown(int i)
{
    int t,flag=0;
    while(i*2<=n&&flag==0)
    {
        if(h[i]>h[i*2])
            t=i*2;
        else 
            t=i;
        if(i*2+1<=n)
        {
            if(h[t]>h[i*2+1])
                t=i*2+1;
        }
        if(t!=i)
            {
                swap(h[t],h[i]);
                i=t;
            }
        else
            flag=1;
    }
}
void creat()
{
    int i;
    for(i=n/2;i>=1;i--)
        siftdown(i);
}
int deletemax()
{
    int t;
    t=h[1];
    h[1]=h[n];
    n--;
    siftdown(1);
    return t;
}
int main ()
{
    int i,num;
    cin>>num;
    for(i=1;i<=num;i++)
        cin>>h[i];
    n=num;
    creat();
    
    for(i=1;i<=num;i++)
        cout<<deletemax()<<" ";
    
    return 0;
}