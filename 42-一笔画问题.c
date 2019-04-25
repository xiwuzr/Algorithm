#include<stdio.h>
#include<string.h>

int cc[1001][1001];
int book[1001],c[1001];
int pp;
int sum;
int m,n;

void dfs(int v)
{
	book[v]=1;
	sum++;
	if(sum==m)
	{
		return;
	}
	int i,j,k;
	for(i=1;i<=m;i++)
	{
		if(book[i]==0&&cc[i][v]!=0)
		{
			dfs(i);
		}
	}
	return;
}


int main()
{
	
	int ch1,ch2;
	int kkk;
	scanf("%d",&kkk);
	while(kkk--)
	{
		int x=0;
		pp=0;
		sum=0;
		memset(cc,0,sizeof(cc));
		memset(book,0,sizeof(book));
		memset(c,0,sizeof(c));
		scanf("%d%d",&m,&n);
		int i,j,k;
		for(i=1;i<=n;i++)
		{
			scanf("%d%d",&ch1,&ch2);
			c[ch1]++;
			c[ch2]++;
			cc[ch1][ch2]++;
			cc[ch2][ch1]++;
		}
		dfs(1);
		if(sum<m)
		{
			printf("No\n");
			continue;
		}
		if(sum==m)
		{
			for(i=1;i<=m;i++)
			{
				if(c[i]%2!=0)
					x++;
			}
			if(x==0||x==2)
			{
				printf("Yes");
				printf("\n");
				continue;
			}
			else
			{
				printf("No");
				printf("\n");
				continue;
			}

		}
		
		
		
	}

}
