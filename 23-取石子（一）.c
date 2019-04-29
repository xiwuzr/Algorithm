#include<stdio.h>

int main()
{
	int kkk;
	scanf("%d",&kkk);
	while(kkk--)
	{
		int n,m;
		scanf("%d%d",&n,&m);
		if(m>n)
		{
			printf("Win\n");
			continue;
		}
		else
		{
			int i,j,k=0;
			for(i=1;i<=m;i++)
			{
				if((n-i)%(m+1)==0)
				{
					printf("Win\n");
					k=1;
					break;
				}
			}
			if(k==0)
			{
				printf("Lose\n");
			}
		}
	}
}