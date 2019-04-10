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

//a^n即为n个a相乘，在n很大时，效率很低，所以，可以将a,变成若干堆，以减少运算次数；