// 时间：2022.1.8 21点06分
// 来源：AcWing 第33场周赛第二题 


//一个序列是合法序列，等价于：
//1、左右括号数量相等(最后cnt=0)
//2、所有前缀中，左括号数量>=右括号数量(cnt>=0)

//cnt=0
//遇到左括号:cnt++
//遇到右括号:cnt--

//贪心思路：
//对于右括号能选则选（cnt>0,右括号必选）
#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

const int N=1000010;
char str[N];
int main()
{  scanf("%s", str);

    int l = 0, r = 0;
    for (int i = 0; str[i]; i ++ )
        if (str[i] == '(') l ++ ;
        else if (l > 0)
        {
            l -- ;
            r ++ ;
        }

    printf("%d\n", r * 2);
    return 0;
}







