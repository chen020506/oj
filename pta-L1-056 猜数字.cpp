//  时间：2022.05.25 23点12分
#include<iostream>
#include<string>
#include<vector>

using namespace std;
int main ()
{
    int n;
    vector<pair<string,int> >mv;
    cin>>n;
    string str;
    int t;
    for(int i=1;i<=n;i++){
        cin>>str>>t;
        mv.push_back(make_pair(str,t));
    }
    int sum=0;//计算平均数的一半
    for(int i=0;i<mv.size();i++)
        sum+=mv[i].second;
    sum=sum/(2*n);
    
    //计算哪个玩家和这个数最接近
    int ret=0;//记录最接近玩家的下标
    int ans=abs(mv[0].second-sum);//记录当前最接近玩家和平均值一半的差值的决定值
   
    for(int i=1;i<mv.size();i++)
         if(abs(mv[i].second-sum)<ans){
             ret=i;
             ans=abs(mv[i].second-sum);
    }
    cout<<sum<<" "<<mv[ret].first<<endl;
    return 0;
}