#include<stdio.h>
#include<stdlib.h>

int cmp(const void *a,const void *b)
{
	return *(int *)a-*(int *)b;
}

int main()
{
	int kkk;
	scanf("%d",&kkk);
	while(kkk--)
	{
		int a[100];
		int m;
		scanf("%d",&m);
		int i,j,k;
		for(i=0;i<m;i++)
		{
			scanf("%d",&a[i]);
		}
		if(m==1)
		{
			printf("%d 1\n",a[0]);
			continue;
		}
		qsort(a,m,sizeof(int),cmp);
		int max_i=a[m-1],max_s=1;
		int sum=1;
		for(i=1;i<m;i++)
		{
			if(a[i]==a[i-1])
			{
				sum++;
			}
			else
			{
				if(sum>max_s)
				{
					max_s=sum;
					max_i=a[i-1];
				}
				sum=1;
			}
		}
		if(sum>max_s)
			max_s=sum;
		printf("%d %d\n",max_i,max_s);
	}
}
