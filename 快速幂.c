#include<stdio.h>

int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int ans=1,base=a;
	while(b!=0)
	{
		if(b&1==1)
		{
			ans*=base;
		}
		base*=base;
		b>>=1;
	}
	printf("%d",ans);
}

//a^n��Ϊn��a��ˣ���n�ܴ�ʱ��Ч�ʺܵͣ����ԣ����Խ�a,������ɶѣ��Լ������������