//   时间;2022.05.21 22点17分
//  思路：以学校为行，每个学校学生人数为列，给每个学生进行编号
//  学校1：1 4 7 10 13 16 19 22 25 28 。。。
//  学校2：2 5 8 11 14 17 20 23 26 29 。。。
//  学校3：3 6 9 12 15 18 21 24 27 30.。。
#include<iostream>
using namespace std;
struct School
{
    int num;//队伍数
    int arr[1010];//队员数目
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
            //如果就只剩下一个学校了，则需要隔开，即再加一
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