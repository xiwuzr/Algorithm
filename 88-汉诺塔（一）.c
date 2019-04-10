#include<stdio.h>
#include<string.h>
long long Pow(long long a, long long b)//快速幂算法
{
	long long c=1000000;
	long long ans = 1;
	a = a % c;
	while(b>0)
	{
		if(b&1 == 1)//做位运算，判断二进制的最后一位数
			ans = (ans * a) % c;//每次计算后，立即取余，只留下六位
		b>>=1;//位运算，去掉最后一位二进制数
		a = (a * a) % c;
	}
	return ans;
}
int main()
{
	int t;
	scanf("%d",&t);
	long long n;
	while(t--)
	{
		scanf("%lld",&n);
		long long cc=2;
		long long ans=Pow(cc,n)-1;//用汉诺塔公式，数据太大，递归会超限；
		printf("%lld\n",ans);
	}
	return 0;
}