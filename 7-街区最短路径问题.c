#include<stdio.h>
#include<math.h>

int a[2][20];
int main()
{
	int kkk;
	scanf("%d",&kkk);
	while(kkk--)
	{
		int n,i,j,k,xmax=0,xmin=9999,ymax=0,ymin=9999;
		int sum=0;
		int sum_min=999999;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d%d",&a[0][i],&a[1][i]);
			if(a[0][i]>xmax)
				xmax=a[0][i];
			if(a[0][i]<xmin)
				xmin=a[0][i];
			if(a[1][i]>ymax)
				ymax=a[1][i];
			if(a[1][i]<ymin)
				ymin=a[1][i];	
		}
		for(i=xmin;i<=xmax;i++)
		{
			for(j=ymin;j<=ymax;j++)
			{
				sum=0;
				for(k=0;k<n;k++)
				{
					sum=sum+abs(i-a[0][k])+abs(j-a[1][k]);
				}
				if(sum<sum_min)
				{
					sum_min=sum;
				}
			}
		}
		printf("%d\n",sum_min);
		
	}
}
