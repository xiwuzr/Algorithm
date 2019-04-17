#include<stdio.h>
int a[100];
void pai(int ooo,int n);
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	pai(0,n);
	
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}

void pai(int ooo,int n)
{
	int i,j,k,m,h;
	for(i=0;i<n-1;i++)
	{
		m=i;
		for(j=i;j<n;j++)
		{
			if(a[m]>a[j])
			{
				m=j;
			}
		}
		if(m!=i)
		{
			k=a[i];
			a[i]=a[m];
			a[m]=k;
		}
	}
}
