#include<stdio.h>
#include<string.h>
#include<math.h>

int zhi(int n)
{
	int i,j,k;
	if(n<2)
	{
		return 0;
	}
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int kkk;
	scanf("%d",&kkk);
	while(kkk--)
	{
		int i;
		char a[101];
		scanf("%s",a);
		int maxi=0;
		int mini=106;
		int bb;
		int len;
		len=strlen(a);
		int b[30]={0};
		int mk;
		for(i=0;i<len;i++)
		{
			mk=(int)a[i]-'a';
			b[mk]++;
		}
		for(i=0;i<30;i++)
		{
			if(b[i]>maxi)
				maxi=b[i];
			if(b[i]!=0&&b[i]<mini)
			{
				mini=b[i];
			}
		}
		bb=maxi-mini;
		if(zhi(bb)==1)
		{
			printf("Lucky Word\n");
			printf("%d\n",bb);
		}
		else
		{
			printf("No Answer\n");
			printf("0\n");
		}
	}
}