//  时间:2022.05.26  23点08分
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main ()
{
    int n,i,j;
    cin>>n;
    string arr[21];//字符串数组
    getchar();
    for(i=0;i<n;i++)//读入这些字符串
        getline(cin,arr[i]);
    for(i=0;i<n;i++){//遍历每一个字符串
        int flag=0;
        for(j=0;j<arr[i].size();j++){
           //找到逗号并且判断是否以ong结尾
            if(arr[i][j]==','&&arr[i][j-1]=='g'&&arr[i][j-2]=='n'&&arr[i][j-3]=='o')
                flag++;
            //找到句号并且判断是否以ong结尾
           if(arr[i][j]=='.'&&arr[i][j-1]=='g'&&arr[i][j-2]=='n'&&arr[i][j-3]=='o')
                flag++;
        }
        if(flag<2){//不押韵
            cout<<"Skipped"<<endl;
            continue;
        }
        int cnt=0;
        //押韵的情况 首先找到倒数第三个空格的位置
        for(j=arr[i].size();j>0;j--){
            if(arr[i][j]==' ')
                cnt++;
            if(cnt==3)
                break;//此时j的位置就是倒数第三个空格的位置
        }
         for(int k=0;k<=j;k++)
             cout<<arr[i][k];
        cout<<"qiao ben zhong."<<endl;
    }
    
    return 0;
}
