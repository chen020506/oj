// 时间：2022.04.18 22点53分
// 这个题主要需要学习它的这个排序仿函数的写法三重条件的排序
#include<iostream>
#include<algorithm>
using namespace std;
class Node
{
  public:
    int id,num;//id是每个人的编号，num是每个人收到的红包数
    float money;//每个人的钱
};
Node res[10010];
bool cmp(Node A,Node B)
{
    if(A.money!=B.money)
        return A.money>B.money;
    else if(A.num!=B.num)
        return A.num>B.num;
    else
        return A.id<B.id;
}
 
int main()
{
    int n,k,t;
    double p;
    cin>>n;//初始化每个人
    for(int i=1;i<=n;i++)
    {
        res[i].id=i;
        res[i].num=0;//获得的红包数
        res[i].money=0;
    }
    for(int i=1;i<=n;i++)
    {
        cin>>k;//每一行k组数据
        while(k--)
        {
            cin>>t>>p;
            res[t].num++;//编号为t的成员的红包数加一
            res[t].money+=p;//编号为t的成员增加钱
            res[i].money-=p;//编号为i的成员减少钱
        }
    }
    sort(res+1,res+n+1,cmp);//按照自定义的排序方式进行排序
    for(int i=1;i<=n;i++)
    {
        printf("%d %.2lf\n",res[i].id,res[i].money/100);
    }
    return 0;
}