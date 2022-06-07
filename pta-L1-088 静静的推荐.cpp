// 时间：2022.06.07 22点41分
#include<iostream>
#include<algorithm>
using namespace std;

int cnt[300];
int main ()
{
    int n,k,s;
    cin>>n>>k>>s;
    int res=0;//推荐的人数
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        if(a>=175)//只有分数大于等于175才有资格
        {
        //如果某学生pat考试的成绩大于等于分数线，则直接推荐
            if(b>=s) res++;
        //如果某学生只是天梯赛成绩大于等于175，则这个分数的人加一
            else cnt[a]++;
        }
    }

    for(int i=175;i<=290;i++)
    //因为只能k次推荐，所以每个分数推荐的人数是这个分数的人数和k的最小值
        res+=min(cnt[i],k);
    printf("%d\n",res);
    return 0;
}