// 时间：2022.04.11 20点08分
#include<iostream>
#include<string>
#include<vector>
using namespace std;

string str;//电话号码
//第一个数组arr
vector<int>arr;
int a[10];//a[0]=0代表电号中没有0这个数字
int main ()
{
    cin>>str;
    //先统计一下电话号码中都有数字几
    for(int i=0;i<str.size();i++){
        a[str[i]-'0']++;
    }
    
    //输出第一个字符串
//     for(int i=0;i<10;i++)
//         if(a[i]!=0)
//             printf("%d:%d\n",i,a[i]);
   // int[] arr = new int[]{8,3,2,1,0};
    bool flag=false;//第一个数字前没有分号，用来处理这种情况
    printf("int[] arr = new int[]{");
    for(int i=9;i>=0;i--){
        if(!flag&&a[i]!=0){
            printf("%d",i);
            flag=true;
            arr.push_back(i);
            continue;
        }
        if(flag&&a[i]!=0){
            //printf(",%d",i);
            cout<<","<<i;
            arr.push_back(i);
        }
    }
    printf("};\n");
    
    //输出第二个字符串
    //int[] index = new int[]{3,0,4,3,1,0,2,4,3,4,4};
    
    flag=false;//第一个数字前没有分号，用来处理这种情况
    printf("int[] index = new int[]{");
    for(int i=0;i<11;i++)
    {
        //找到这个电话号码这一位数字在arr数字中对应的位置
        int ret=str[i]-'0';
        for(int j=0;j<arr.size();j++){
            if(!flag&&ret==arr[j]){
                printf("%d",j);
                flag=true;
                continue;
            }
            if(flag&&ret==arr[j])
                //printf("%,%d",j);
                cout<<","<<j;
        }
    }
    printf("};\n");
    return 0;
}