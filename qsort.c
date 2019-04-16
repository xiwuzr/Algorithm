#include<stdio.h>

void pai(int a[],int left,int right);

int main( )
{
	int n;
	scanf("%d",&n);
	int i,j,k;
	int a[100];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	pai(a,0,n-1);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}

void pai(int a[],int left,int right)
{
	int p,q;
	if(left>right)
	{
		return;
	}
	int head,k;
	head=a[left];
	p=left;
	q=right;
	while(p!=q)
	{
		while(a[q]>=head&&p<q)
			q--;
		while(a[p]<=head&&p<q)
			p++;
		if(p<q)
		{
			k=a[p];
			a[p]=a[q];
			a[q]=k;
		}
	}
	a[left]=a[q];
	a[q]=head;
	pai(a,left,q-1);
	pai(a,q+1,right);
	return;
	
}
































