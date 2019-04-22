#include<stdio.h>

int main()
{
	int a[20],b[20],c[50];
	int n=0,m=0;
	int i,j,k;
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	k=0;
	i=0;j=0;
	while(i<m||j<n)
	{
		if(i<m&&j<n)
		{
			if(a[i]<b[j])
			{
				c[k]=a[i];
				i++;
			}
			else
			{
				c[k]=b[j];
				j++;
			}
		}
		else if(i<m&&j>=n)
		{
			c[k]=a[i];
			i++;
		}
		else if(j<n&&i>=m)
		{
			c[k]=b[j];
				j++;
		}
		k++;
	}
	for(i=0;i<k;i++)
	{
		printf("%d ",c[i]);
	}
}










