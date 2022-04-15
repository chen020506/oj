// 时间：2022.04.15 21点59分
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n;
vector<int>mv;
bool bv[1010];//用来判断重复
int main ()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int k=0,ret=0;
        cin>>k;
        for(int j=1;j<=k;j++){
            cin>>ret;
            mv.push_back(ret);
        }
    }
    sort(mv.begin(),mv.end());//将所有的数进行一个排序，然后从后面开始遍历
    int mmax=-1,ans=0;//mmax代表出现的次数，ans代表那个数
    for(int i=mv.size()-1;i>=0;i--)
    {
        int sum=0;
        if(bv[mv[i]]==0){//之前没有碰到过才进行查找
        for(int q=0;q<mv.size();q++)
            if(mv[q]==mv[i])
                sum++;
         //判断这个数出现的次数
        if(sum>mmax)//如果比记录的值还大则进行更新
        {
            ans=mv[i];
            mmax=sum;
        }
           bv[mv[i]]=1;//标记这个数已经计算过了
        }
    }
   cout<<ans<<" "<<mmax<<endl;
    return 0;
}