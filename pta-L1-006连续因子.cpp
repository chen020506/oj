// 时间:2022.04.03 11点59分
#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int n;
vector<int>a;//每次遍历存放因子的容器
vector<int>ans;//存放最终答案的容器

bool isprime(int n)
{
    if(n<2)//1不是素数
        return false;
    for(int i=2;i<sqrt(n);i++)
        if(n%i==0)
            return false;
    return true;
}
int main ()
{
    cin>>n;
    int res=-1;//res用来记录当前数组的长度,初始化为负数
    //判断是否是素数，如果为素数则直接输出自己本身即可
    if(isprime(n)){
        cout<<1<<endl<<n;
        return 0;
    }
    for(int i=2;i<=n;i++)
    {
        int tmp=1;
        a.clear();//每次开始遍历时先要将a数组清空
        int cnt=0;//记录相邻因子的长度
        for(int j=i;j<=n;j++)
        {
            tmp*=j;
            if(n%tmp!=0)//如果发现无法被整除则退出循环，此时以i为开始的相邻因子的遍历已经结束
                break;
            a.push_back(j);
            cnt++;
            
        }
        if(res<cnt)//如果当前答案中的相邻因子的长度小于此时遍历的结果则进行更新
        {
        res=cnt;
        ans.clear();
        for(int i=0;i<a.size();i++)
            ans.push_back(a[i]);
         }
    }
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++)
    {
        if(i==0)
            cout<<ans[0];
        else
            cout<<"*"<<ans[i];
    }
    return 0;
}