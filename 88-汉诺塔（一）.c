#include<stdio.h>
#include<string.h>
long long Pow(long long a, long long b)//�������㷨
{
	long long c=1000000;
	long long ans = 1;
	a = a % c;
	while(b>0)
	{
		if(b&1 == 1)//��λ���㣬�ж϶����Ƶ����һλ��
			ans = (ans * a) % c;//ÿ�μ��������ȡ�ֻ࣬������λ
		b>>=1;//λ���㣬ȥ�����һλ��������
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
		long long ans=Pow(cc,n)-1;//�ú�ŵ����ʽ������̫�󣬵ݹ�ᳬ�ޣ�
		printf("%lld\n",ans);
	}
	return 0;
}