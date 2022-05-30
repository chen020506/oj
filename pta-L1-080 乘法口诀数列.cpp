//  时间：2022.05.30 12点45分
#include<iostream>
#include<vector>
using namespace std;
int main ()
{
    vector<int>mv;
    int a1,a2,n,ret;
    int l=0,r=1;//l,r表示当前乘的因子下标
    cin>>a1>>a2>>n;
    mv.push_back(a1);
    mv.push_back(a2);
    //n=1和n=2的情况需要特判 刚开始没想到hhh,一定要注意数据范围
    if(n==1){
        cout<<a1<<endl;
        return 0;
    }
    if(n==2){
        cout<<a1<<" "<<a2<<endl;
        return 0;
    }
    while(1){
        ret=mv[l++]*mv[r++];
        if(ret>=10){//如果是两位数
            int b,c;//分别记录十位和个位
            b=ret/10;
            mv.push_back(b);

            if(mv.size()==n)
                break;
            
            c=ret%10;
            mv.push_back(c);
            if(mv.size()==n)
                break;           
        }
        else{//乘出来是一位数
            mv.push_back(ret);
            //a1,a2需要发生改变

            if(mv.size()==n)
                break;
        }
    }
    for(int i=0;i<n;i++)
        if(i==0)
            cout<<mv[0];
        else 
            cout<<" "<<mv[i];
    return 0;
}