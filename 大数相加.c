#include<stdio.h>
#include<string.h>
char a[100],b[100];
int m[100],n[100];
int maxi (int a,int b)
{
	if(a>b)
	{
		return a;
	}
	return b;
}

int main()
{
	int i;
	scanf("%s%s",a,b);
	int la,lb;
	la=strlen(a);
	lb=strlen(b);
	int p=la-1,q=lb-1;
	for(i=0;i<la;i++)
	{
		m[p]=(int)a[i]-'0';
		p--;
	}
	for(i=0;i<lb;i++)
	{
		n[q]=(int)b[i]-'0';
		q--;
	}
	for(i=0;i<maxi(la,lb);i++)
	{
		n[i]=m[i]+n[i];
		int kk;
		n[i+1]=n[i]/10+n[i+1];
		n[i]=n[i]%10;
	}
	for(i=99;;i--)
	{
		if(n[i]!=0)
			break;
		
	}
	int jj=0;
	for(;i>=0;i--)
	{
		jj=1;
		printf("%d",n[i]);
	}
	if(jj==0)
	{
		printf("0");
	}
	
		
	
}









