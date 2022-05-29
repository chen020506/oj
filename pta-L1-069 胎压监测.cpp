//  时间：2022.05.29 22点53分
#include<iostream>
#include<algorithm>
using namespace std;
int main ()
{
    int t1,t2,t3,t4,mmin,ret;
    cin>>t1>>t2>>t3>>t4>>mmin>>ret;
    //第一种情况，不报警
    int mmax;//四个胎压中的最大值
    mmax=max(t1,t2);
    mmax=max(mmax,t3);
    mmax=max(mmax,t4);
    if(t1>=mmin&&t2>=mmin&&t3>=mmin&&t4>=mmin
      &&(mmax-t1<=ret)&&(mmax-t2<=ret)&&(mmax-t3<=ret)&&(mmax-t4<=ret)){
        cout<<"Normal"<<endl;
        return 0;}
    
    //第二种情况 有一个轮胎需要报警
    //t1
    if((mmax-t1>ret||t1<mmin)&&t2>=mmin&&t3>=mmin&&t4>=mmin
      &&(mmax-t2<=ret)&&(mmax-t3<=ret)&&(mmax-t4<=ret)){
        printf("Warning: please check #%d!",1);
        return 0;}
    //t2
    if((mmax-t2>ret||t2<mmin)&&t1>=mmin&&t3>=mmin&&t4>=mmin
      &&(mmax-t1<=ret)&&(mmax-t3<=ret)&&(mmax-t4<=ret)){
        printf("Warning: please check #%d!",2);
        return 0;}
    //t3
    if((mmax-t3>ret||t3<mmin)&&t1>=mmin&&t2>=mmin&&t4>=mmin
      &&(mmax-t1<=ret)&&(mmax-t2<=ret)&&(mmax-t4<=ret)){
        printf("Warning: please check #%d!",3);
        return 0;}
    //t4
    if((mmax-t4>ret||t4<mmin)&&t1>=mmin&&t2>=mmin&&t3>=mmin
      &&(mmax-t1<=ret)&&(mmax-t2<=ret)&&(mmax-t3<=ret)){
        printf("Warning: please check #%d!",4);
        return 0;}
    
    //剩下的情况：存在两个或者两个以上出现问题 
    cout<<"Warning: please check all the tires!"<<endl;
    return 0;
}