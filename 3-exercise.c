#include<stdio.h>
int a[100];
void pai(int left,int right);
int main()
{
	int n;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	pai(0,n-1);
	
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}

void pai(int left,int right)
{
	if(left>right)
	{
		return;
	}
	int p,q,head,k;
	head=a[left];
	p=left;
	q=right;
	while(p!=q)
	{
		while(p<q&&a[q]>=head)
		{
			q--;
		}
		while(p<q&&a[p]<=head)
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
	pai(left,q-1);
	pai(q+1,right);
		
	
}













