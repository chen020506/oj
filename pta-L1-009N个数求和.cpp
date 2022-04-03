// 时间：2022.04.03 18点46分
#include<iostream>
using namespace std;

long long int gcd(long long int a, long long int b)
{
	return b ? gcd(b, a % b) : a;
}
int main()
{
	long long int N = 0, a = 0, b = 0, sum_a = 0, sum_b = 1, t;
	scanf("%lld", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%lld/%lld", &a, &b);
		//通分相加
		sum_a *= b;
		sum_a += a * sum_b;
		sum_b *= b;
		//约分
		t = gcd(sum_a, sum_b);
		sum_a /= t;
		sum_b /= t;
	}
	if (sum_a % sum_b == 0)//只有整数部分
		printf("%lld\n", sum_a / sum_b);
	else if (sum_a < sum_b)//真分数
		printf("%lld/%lld\n", sum_a, sum_b);
	else//假分数        
		printf("%lld %lld/%lld\n", sum_a / sum_b, sum_a % sum_b, sum_b);
	return 0;
}
