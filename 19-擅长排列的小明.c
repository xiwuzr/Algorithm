#include<stdio.h>

int m,n;
int a[11];
int book[11];

void dfs(int tmp)
{
	int i;
	if(tmp==m)
	{
		for(i=0;i<m;i++)
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
			book[i]=1;
			a[tmp]=i;
			dfs(tmp+1);
			book[i]=0;
		}
	}
	
	
}

int main()
{
	int kkk;
	scanf("%d",&kkk);
	while(kkk--)
	{
		scanf("%d%d",&n,&m);
		int i,j;
		for(i=0;i<11;i++)
		{
			book[i]=0;
		}
		dfs(0);
	}
	return 0;
}








