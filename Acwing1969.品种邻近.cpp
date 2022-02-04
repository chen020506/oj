// 时间：2022.2.4 18点39分
#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;

const int M=1000010;
int n,k;
int cnt[M];

int main ()
{
    scanf("%d%d",&n,&k);
    int res=-1;
    queue<int>q;
    for(int i=1;i<=n;i++)
    {
        int id;
        cin>>id;
        if(cnt[id]>0) res=max(id,res);
        cnt[id]++;
        q.push(id);
        if(q.size()>k)
        {
            cnt[q.front()]--;
            q.pop();
        }
     }
    cout<<res<<endl;
    return 0;
}