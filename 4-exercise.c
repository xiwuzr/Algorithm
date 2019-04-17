#include<stdio.h>
int n;
int book[100];
void dfs(int tmp);
int a[100];

int main()
{
	scanf("%d",&n);
	dfs(0);
	return 0;
	
}
void dfs(int tmp)
{
	int i,j,k;
	if(tmp==n)
	{
		for(i=0;i<n;i++)
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
			dfs(tmp+1);
			book[i]=0;
		}
	}
	return;
}