#include<stdio.h>

struct node
{
	int x;
	int y;
};

int main()
{
	struct node a[2500];
	int book[50][50]={};
	int b[50][50];///////////////////////////////////map
	int head,taile;
	int i,j,k,stx,sty,tx,ty;
	int next[4][2]={0,1,1,0,0,-1,-1,0};
	int m,n;
	scanf("%d%d",&m,&n);
	head=0;
	taile=0;
	scanf("%d%d",&stx,&sty);
	a[head].x=stx-1;
	a[head].y=sty-1;
	taile++;
	int sum=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	while(head<taile)
	{
		for(i=0;i<4;i++)
		{
			tx=a[head].x+next[i][0];
			ty=a[head].y+next[i][1];
			if(tx<0||ty<0||tx>=m||ty>=n)
				continue;
			if(b[tx][ty]>0&&book[tx][ty]==0)
			{
				sum++;
				a[taile].x=tx;
				a[taile].y=ty;
				book[tx][ty]=1;
				taile++;
			}
		}
		head++;
	}
	printf("\n%d\n",sum);
	
}



















