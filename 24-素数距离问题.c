#include<stdio.h>
#include<math.h>
int minx(int a,int b);

int left(int a);
int right(int a);

int main()
{
	int kkk;
	scanf("%d",&kkk);
	
	int a,b,c,d;
	while(kkk--)
	{
		scanf("%d",&a);
		if(a==1)
		{
			printf("2 1\n");
			continue;
		}
		c=left(a);
		d=right(a);
		if(abs(d-a)<abs(c-a))
		{
			printf("%d %d\n",d,abs(d-a));
		}
		else
		{
			printf("%d %d\n",c,abs(c-a));
		}
	}
	
	return 0;
}

int minx(int a,int b)
{
	if(a<b)
		return a;
	return b;
}

int left(int a)
{
	int b;
	if(a==2||a==3)
		return a;
	b=sqrt(a);
	int i,j,k;
	for(i=a;i>=1;i--)
	{
		k=0;
		for(j=2;j<=b;j++)
		{
			if(i%j==0)
			{
				k=1;
				break;
			}
		}
		if(k==0)
		{
			return i;
		}
	}
}
int right(int a)
{
	int b;
	if(a==2||a==3)
		return a;
	b=sqrt(a);
	int i,j,k;
	for(i=a;;i++)
	{
		k=0;
		for(j=2;j<=b;j++)
		{
			if(i%j==0)
			{
				k=1;
				break;
			}
		}
		if(k==0)
		{
			return i;
		}
	}
}

