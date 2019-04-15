#include<stdio.h>

int kk[4][2]={{0,1},{1,0},{-1,0},{0,-1}};

int min=999999;

char map[6][6];

int book[6][6];

void dfs(int x,int y,int tmp);
int main()
{
	
	int a,b,i,j,k;
	for(i=0;i<6;i++)
	{
		scanf("%s",map[i]);
	}
	
	dfs(0,0,0);
	printf("%d",min);
	return 0;
}

void dfs(int x,int y,int tmp)
{
	int i,j,k,x1,x2,y1,y2;
	book[x][y]=1;
	if(map[x][y]=='*')
	{
		if(tmp<min)
		{
			min=tmp;
		}
		return;
	}
	
	for(i=0;i<4;i++)
	{
		x1=x+kk[i][0];
		y1=y+kk[i][1];
		if(x1<0||x1>5||y1<0||y1>5)
		{
			continue;
		}
		if(map[x1][y1]!='x'&&book[x1][y1]==0)
		{
			dfs(x1,y1,tmp+1);
			book[x1][y1]=0;
		}
	}
	return;
}

























