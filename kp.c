#include<stdio.h>
int a[100];
void kp(int a[],int qian,int hou)
{
	if(qian>=hou)
		return;
	int i,j,hand,k;
	hand=a[qian];
	i=qian+1;
	j=hou;
	while(i!=j)
	{
		while(a[j]>=hand&&i<j)
		{
			j--;
		}
		while(a[i]<=hand&&i<j)
		{
			i++;
		}
		if(i<j)
		{
			k=a[i];
			a[i]=a[j];
			a[j]=k;
		}
	}
	k=a[i];
	a[i]=hand;
	hand=k;
	return;
	
}

main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	kp(a,0,n-1);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}