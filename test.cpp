//获得之前的字典序
#include<iostream>
#include<algorithm>
using namespace std;
int a[3]={3,2,1};
int main ()
{
    do
    {
        cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
    }while(prev_permutation(a,a+3));
}
  
3 2 1
3 1 2
2 3 1
2 1 3
1 3 2
1 2 3

//获得之后的字典序
#include<iostream>
#include<algorithm>
using namespace std;
int a[3]={1,2,3};
int main ()
{
    do
    {
        cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
    }while(next_permutation(a,a+3));
}
  
1 2 3
1 3 2
2 1 3
2 3 1
3 1 2
3 2 1