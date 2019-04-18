#include<stdio.h>
int next[4][2]={0,1,1,0,0,-1,-1,0};
int sum;
int book[50][50]={};
int b[50][50];
void dfs(int x,int y);
int m,n;

int main()
{
	int i,j,k,stx,sty,tx,ty;
	
	
	scanf("%d%d",&m,&n);
	scanf("%d%d",&stx,&sty);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	book[stx][sty]=1;
	sum=1;
	dfs(stx-1,sty-1);
	printf("%d",sum);
}

void dfs(int x,int y)
{
	int tx,ty,k;
	int i,j;
	for(i=0;i<4;i++)
	{
		tx=x+next[i][0];
		ty=y+next[i][1];
		if(tx<0||ty<0||tx>=m||ty>=n)
			continue;
		if(b[tx][ty]>0&&book[tx][ty]==0)
		{
			sum++;
			book[tx][ty]=1;
			dfs(tx,ty);
		}
	}
	return;
}






























