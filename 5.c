#include<stdio.h>
int a[10];
int b[10];
int book[10];
int n;

void dfs(int tmp)
{
	int i,j,k;
	if(tmp==n)
	{
		for(i=0;i<n;i++)
		{
			printf("%d ",b[i]);
		}
		printf("\n");
		return;
	}
	for(i=0;i<n;i++)
	{
		if(book[i]==0)
		{
			book[i]=1;
			b[tmp]=a[i];
			dfs(tmp+1);
			book[i]=0;
		}
	}
}

int main()
{
	scanf("%d",&n);
	int i,j,k;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	dfs(0);
}
