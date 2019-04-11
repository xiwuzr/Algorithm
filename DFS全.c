#include<stdio.h>

void dfs(int tmp,int a[],int book[],int n);

int main()
{
	int b,c;
	int a[100],n,book[100]={0};
	scanf("%d",&n);
	dfs(1,a,book,n);
	return 0;
}

void dfs(int tmp,int a[],int book[],int n)
{
	int i;
	if(tmp==n+1)
	{
		for(i=1;i<=n;i++)
		{
			printf("%d",a[i]);
		}
		printf("\n");
		return;
	}
	for(i=1;i<=n;i++)
	{
		if(book[i]==0)
		{
			a[tmp]=i;
			book[i]=1;
			dfs(tmp+1,a,book,n);
			book[i]=0;
		}
	}
	return;
}











