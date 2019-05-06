#include<stdio.h>

int main()
{
	int a,b;
	int kk[20]={0,1,5,8,9,10,17,17,20,24,30};
	int pp[20]={};
	scanf("%d",&a);
	int i,j,k;
	for(i=1;i<=a;i++)
	{
		int max=-1;
		for(j=0;j<i;j++)
		{
			int tmp=pp[j]+kk[i-j];
			if(tmp>max)
				max=tmp;
		}
		pp[i]=max;
	}
	printf("%d ",pp[a]);
	
}