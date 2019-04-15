#include<stdio.h>

typedef struct node
{
	int x;
	int y;
	int s;
}KK;

int main()
{
	KK que[2500];
	int next[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
	char a[50][50];
	int book[50][50]={};
	int m,n,startx,starty,endx,endy,i,j,head,tail,tx,ty;
	printf("请输入地图大小：\n");
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		scanf("%s",a[i]);
	}
	printf("\n请输入起点与终点坐标：\n");
	scanf("%d%d%d%d",&startx,&starty,&endx,&endy);
	head=tail=0;
	que[head].x=startx;
	que[head].y=starty;
	que[head].s=0;
	book[startx][starty]=1;
	tail++;
	int flage=0;
	while(head<tail)
	{
		for(i=0;i<4;i++)
		{
			tx=que[head].x+next[i][0];
			ty=que[head].y+next[i][1];
			if(tx<0||tx>=m||ty<0||ty>=n)
			{
				continue;
			}
			if(a[tx][ty]=='.'&&book[tx][ty]==0)
			{
				que[tail].x=tx;
				que[tail].y=ty;
				que[tail].s=que[head].s+1;
				book[tx][ty]=1;
				tail++;
			}
			if(tx==endx&&ty==endy)
			{
				flage=1;
				break;
			}	
		}
		if(flage==1)
			break;
		head++;
	}
	
	printf("%d",que[tail-1].s);
	return 0;
	
	

	
	
}






































