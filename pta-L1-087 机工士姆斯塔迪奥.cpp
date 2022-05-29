// 时间：2022.05.29 10点44分

//第一种：优美版：

#include<iostream>
#include<set>
#include<algorithm>
using namespace std;
int main ()
{
    int n,m,q;
    set<int>hh,ll;//hh是行号的集合，ll是列号的集合，set可以自动判重
    cin>>n>>m>>q;
    while(q--){
        int t,c;
        cin>>t>>c;
        if(t==0){//行号
            hh.insert(c);
        }
        else if(t==1){//列号
            ll.insert(c);
        }
    }
    cout<<n*m-hh.size()*m-ll.size()*n+hh.size()*ll.size()<<endl;//稍微推导即可得
    return 0;
}
//第二种：暴力法：

// #include<iostream>
// using namespace std;
// int main ()
// {
//     int n,m,q;
//     cin>>n>>m>>q;
//     int arr[n+10][m+10];
//     for(int i=1;i<=n;i++)
//         for(int j=1;j<=m;j++)
//             arr[i][j]=0;
//     while(q--){
//         int t,c;
//         cin>>t>>c;
//         if(t==0)//选择第c行
//             for(int i=1;i<=m;i++)
//                 arr[c][i]=1;
//         else if(t==1)//选择第c列
//             for(int i=1;i<=n;i++)
//                 arr[i][c]=1;
//     }
//     int sum=0;
//     for(int i=1;i<=n;i++)
//         for(int j=1;j<=m;j++)
//             if(arr[i][j]==0)
//                 sum++;
//     cout<<sum<<endl;
//     return 0;
// }