#include<stdio.h>
#include<string.h>

int a[1000];
int b[1000];
int sum[1000];
char a1[1000];
char b1[1000];
int la;
int lb;

int main()
{
	int i,j,kk;
	scanf("%s%s",a1,b1);
	la=strlen(a1);
	lb=strlen(b1);
	int p=la-1,q=lb-1;
	for(i=0;i<la;i++)
	{
		a[p]=(int)a1[i]-'0';
		p--;
	}
	for(i=0;i<lb;i++)
	{
		b[q]=(int)b1[i]-'0';
		q--;
	}
	for(i=0;i<lb;i++)
	{
		for(j=0;j<la;j++)
		{
			int book;
			book=b[i]*a[j]+sum[i+j];
			sum[i+j]=(book%10);
			sum[i+j+1]+=book/10;
			
		}
	}
	int uu=0;
	for(i=la*lb;i>=0;i--)
	{
		if(sum[i]!=0)
		{
			uu=1;
			break;
		}
	}
	if(uu==0)
	{
		printf("0\n");
	}
	else
	{
		for(i;i>=0;i--)
		{
			printf("%d",sum[i]);
		}
		printf("\n");
	}
	
}














