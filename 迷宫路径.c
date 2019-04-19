#include<stdio.h>
int book[50][50];
int m,n;
int map[50][50];
int stx,sty;
int enx,eny;

struct node
{
	int x;
	int y;
};
struct node an[2500];
int next[4][2]={0,1,1,0,0,-1,-1,0};

void dfs(int x,int y,int tmp);

int main()
{
	int i,j,k;
	int tmp=0;
	scanf("%d%d",&m,&n);
	scanf("%d%d",&stx,&sty);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&map[i][j]);
		}
	}
	scanf("%d%d",&enx,&eny);
	book[stx][sty]=1;
	an[tmp].x=stx;
	an[tmp].y=sty;
	dfs(stx,sty,tmp);
	return 0;
}

void dfs(int x,int y,int tmp)
{
	int i,j,k;
	int tx,ty;
	if((x==enx)&&(y==eny))
	{
		printf("%d\n",tmp);
		for(i=0;i<=tmp;i++)
		{
			printf("(%d,%d) ",an[i].x,an[i].y);
		}
		printf("\n");
		return;
	}
	for(i=0;i<4;i++)
	{
		tx=x+next[i][0];
		ty=y+next[i][1];
		if(tx<0||ty<0||tx>=m||ty>=n)
			continue;
		if(book[tx][ty]==0&&map[tx][ty]!=1)
		{
			book[tx][ty]=1;
			//»Î’ª
			an[tmp+1].x=tx;
			an[tmp+1].y=ty;
			dfs(tx,ty,tmp+1);
			//ªÿÀ›
			book[tx][ty]=0;
		}
	}
	return;
}


























