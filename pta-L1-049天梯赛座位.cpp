//      时间;2022.05.21 22点17分
#include<iostream>
using namespace std;
struct School
{
    int num;//队伍数
    int arr[1010];//队员数目
    int flag=0;//判断这个学校的学生是否已经编号完毕
};
int main ()
{
    int n,i,j;
    cin>>n;//n个学校
    School sc[101];//最多100个学校
    for(i=1;i<=n;i++)
        cin>>sc[i].num;//第i个学校的队伍数
    

    //找出每个学校的队员数最大值
    int mmax=sc[1].num*10;
    for(j=2;j<=n;j++)
        if(sc[j].num>sc[1].num)
            mmax=sc[j].num*10;
    
        //进行编号
    int ans=1;//编号
    
    for(i=1;i<=mmax;i++){
        for(j=1;j<=n;j++){
            //如果第j个学校的队伍队员已经排完了，则跳过这个学校
            if(sc[j].num*10<i) continue;
            //第j个学校的第i个队员进行编号
            sc[j].arr[i]=ans++;
            if(i!=1&&sc[j].arr[i-1]+1==sc[j].arr[i]){
                ans++;
            sc[j].arr[i]++;
            }
        }
    }
    for(i=1;i<=n;i++){
        printf("#%d\n",i);
        for(j=1;j<=sc[i].num*10;j++){
            cout<<sc[i].arr[j];
            if(j%10!=0)
                cout<<" ";
            else
                cout<<endl;
        }   
    }
    return 0;
}