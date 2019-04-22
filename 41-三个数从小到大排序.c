#include<stdio.h>
#include<stdlib.h>

int cmp(const void *a,const void *b)
{
	return *(int*)a-*(int*)b;
}

int main()
{
	int i,j,k;
	int a[3];
	for(i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
	}
	qsort(a,3,sizeof(int),cmp);
	printf("%d %d %d",a[0],a[1],a[2]);
	
}