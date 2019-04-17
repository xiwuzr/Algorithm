#include<stdio.h>
#include<stdlib.h>

int a[100];
void pai(int oo,int n);


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

void pai(int oo,int n)
{
	int i,j,k,h;
	for(i=0;i<n-1;i++)
	{
		k=0;
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				h=a[j];
				a[j]=a[j+1];
				a[j+1]=h;
				k=1;
			}
		}
		if(k==0)
			return;
	}
}























