#include<stdio.h>
int book[11];
int a[11];
int n,r;
void dfs(int tmp)
{
	int i,j,k;
	if(tmp>=r)
	{
		for(i=0;i<r;i++)
		{
			if(a[i]<a[i+1])
				return;
		}
		for(i=0;i<r;i++)
		{
			printf("%d",a[i]);
		}
		printf("\n");
		return;
	}
	for(i=n;i>=1;i--)
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
int main()
{
	scanf("%d%d",&n,&r);
	dfs(0);
	return 0;
}