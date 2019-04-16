#include<stdio.h>
struct lu
{
	int x;
	int y;
	int s;
};

int main()
{
	char map[50][50];
	struct lu how[2500];
	int book[50][50]={0};
	int next[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
	int m,n,tx,ty;
	scanf("%d%d",&m,&n);
	getchar();
	int i;
	for(i=0;i<m;i++)
	{
		scanf("%s",map[i]);
	}
	int startx,starty,endx,endy;
	scanf("%d%d%d%d",&startx,&starty,&endx,&endy);
	int head=0;
	int tail=0;
	int flage;
		how[0].x=startx;
	how[0].y=starty;
	how[0].s=0;
	
	tail++;
///////////////////..............Â·xxxxxxÕÏ°­
	while(head<=tail)
	{
		flage=0;
		for(i=0;i<4;i++)
		{
			tx=how[head].x+next[i][0];
			ty=how[head].y+next[i][1];
			if(tx<0||ty<0||tx>=m||ty>=n)
				continue;
			if(map[tx][ty]=='.'&&book[tx][ty]==0)
			{
				
				
				
					how[tail].x=tx;
					how[tail].y=ty;
					how[tail].s=how[head].s+1;
					book[tx][ty]=1;
					tail++;
					if(tx==endx&&ty==endy)
					{
						flage=1;
						break;
					}
			}
		}
		if(flage==1)
		{
			break;
		}
		head++;
	}
	printf("%d\n",how[tail-1].s);
	
}




















