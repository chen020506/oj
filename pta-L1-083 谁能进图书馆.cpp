//  时间：2022.05.29 22点04分
// 第一种：自己写的wuwuwu，代码太长了
#include<iostream>
using namespace std;
int main ()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    //第一行：
    
    //两个都能进 
    //两个都大于等于禁入年龄或者一个小于禁入年龄但是另一个人大于等于陪同年龄
    if((c>=a&&d>=a)||(c<a&&d>=b)||(c>=b&&d<a))
        printf("%d-Y %d-Y\n",c,d);
    //1号进，2号不进
    //1大于等于禁入年龄小于陪同年龄并且2号小于禁入年龄
    if(c>=a&&c<b&&d<a)
        printf("%d-Y %d-N\n",c,d);
    //1号不进，2号进
    //2大于等于禁入年龄小于陪同年龄并且1号小于禁入年龄
    if(c<a&&d>=a&&d<b)
        printf("%d-N %d-Y\n",c,d);
    //两个都不进
    //两个都小于禁入年龄
    if(c<a&&d<a)
        printf("%d-N %d-N\n",c,d);
    
    //第二行
//如果两个人必须一起进则输出qing X zhao gu hao Y其中X是陪同人的编号，Y是小孩子的编号；
//c大于陪同年龄，d小于禁入年龄或者d大于陪同年龄，c小于禁入年龄
    int mmin,mmax;//mmin表示较小的编号
    if(c>d)
        {mmin=2,mmax=1;}
    else if(c<d)
        {mmin=1;mmax=2;}
    if((c>=b&&d<a)||(d>=b&&c<a))
        printf("qing %d zhao gu hao %d\n",mmax,mmin);
    //如果两个人都可以进但不是必须一起的，则输出 huan ying ru guan；
    //c大于等于禁入年龄并且d大于等于禁入年龄
    if(c>=a&&d>=a)
        printf("huan ying ru guan\n");

    //如果两个人都进不去，则输出 zhang da zai lai ba；
    //c小于禁入年龄，d也小于禁入年龄
    if(c<a&&d<a)
        printf("zhang da zai lai ba\n");

    //如果一个人能进一个不能，则输出 X: huan ying ru guan，其中 X 是可以入馆的那个人的编号。
    //c大于等于禁入年龄小于陪同年龄，d小于禁入年龄
    //或者d大于等于禁入年龄小于陪同年龄，c小于禁入年龄
    if((c>=a&&c<b&&d<a)||(d>=a&&d<b&&c<a))
        printf("%d: huan ying ru guan\n",mmax);
           
    return 0;
}
// 第二种：别人的：https://blog.csdn.net/qq_53786696/article/details/124426118
// #include<stdio.h>
// int main()
// {
// 	int a,b,c,d;
// 	scanf("%d %d %d %d",&a,&b,&c,&d);
// 	if(c>=a&&d>=a)  //两个人的年龄都大于等于禁入年龄线 
// 	{
// 		printf("%d-Y %d-Y\n",c,d);
// 		printf("huan ying ru guan");
// 	}
// 	else if(c>=a&&d<a)  //第一个人大于等于禁入年龄线 第二人小于 
// 	{
// 		if(c>=b)   //第一个人大于等于陪同年龄线 
// 		{
// 			printf("%d-Y %d-Y\n",c,d);
// 			printf("qing 1 zhao gu hao 2");
// 		} 
// 		else    //第一个人小于陪同年龄线 
// 		{
// 			printf("%d-Y %d-N\n",c,d);
// 			printf("1: huan ying ru guan");
// 		} 
// 	}
// 	else if(d>=a&&c<a) //第二个人大于等于禁入年龄线 第一人小于 
// 	{
// 		if(d>=b)   //第二个人大于等于陪同年龄线 
// 		{
// 			printf("%d-Y %d-Y\n",c,d);
// 			printf("qing 2 zhao gu hao 1");
// 		} 
// 		else    //第二个人小于陪同年龄线 
// 		{
// 			printf("%d-N %d-Y\n",c,d);
// 			printf("2: huan ying ru guan");
// 		} 
// 	}
// 	else         //两个人都小于禁入年龄线 
// 	{
// 		printf("%d-N %d-N\n",c,d);
// 		printf("zhang da zai lai ba");
// 	} 
// 	return 0;
// } 
