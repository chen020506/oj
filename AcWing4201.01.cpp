// 时间：2021.12.26 23点15分
// 来源：AcWing31场周赛

#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int res=0;
	for(int i=1;i<1<<10;i++)//将数据范围转换成二进制，然后枚举 
	{
		int x=0;
		for(int j=0;j<10;j++)//将二进制的数转换为十进制 
			x=x*10+(i>>j&1);
		if(x<=n) res++;
	}
	cout<<res<<endl;
	return 0;
}
