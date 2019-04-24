#include<stdio.h>
#include<string.h>

int main()
{
	char a[1002],b[1002];
	while((scanf("%s%s",a,b)))
	{
		if(a[0]=='0'&&b[0]=='0')
			break;
		int m,n;
		int p,q;
		int kk;
		m=0;n=0;
		p=strlen(a)-1;
		q=strlen(b)-1;
		if(a[m]=='-'&&b[n]!='-')
		{
			printf("a<b\n");
			continue;
		}
		if(a[m]!='-'&&b[n]=='-')
		{
			printf("a>b\n");
			continue;
		}
		if(a[m]=='-'&&b[n]=='-')
		{
			if(p<q)
			{
				printf("a>b\n");
				continue;
			}
			if(p>q)
			{
				printf("a<b\n");
				continue;
			}
			if(p==q)
			{
				kk=strcmp(a,b);
				if(kk==0)
				{
					printf("a=b\n");
					continue;
				}
				if(kk>0)
				{
					printf("a<b\n");
					continue;
				}
				if(kk<0)
				{
					printf("a>b\n");
					continue;
				}
			}
		}
		if(a[m]!='-'&&b[n]!='-')
		{
			if(p>q)
			{
				printf("a>b\n");
				continue;
			}
			if(p<q)
			{
				printf("a<b\n");
				continue;
			}
			if(p==q)
			{
				kk=strcmp(a,b);
				printf("%d",kk);
				getchar();
				if(kk==0)
				{
					printf("a=b\n");
					continue;
				}
				if(kk<0)
				{
					printf("a<b\n");
					continue;
				}
				if(kk>0)
				{
					printf("a>b\n");
					continue;
				}
			}
			
		}
		
	}
}












