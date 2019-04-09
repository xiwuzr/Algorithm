#include<stdio.h>

int n[1000]={0};
int han(long long a);

int main()
{
	int m,h;
	long long a;
	scanf("%d",&m);
	 while(m--)
	 {
	 	int w;
		for(w=1;w<=1000;w++)
		{
			h=han(w);
		 printf("%d\n",h);
		}
		 
	 }
}

int han(long long a)
{
	int tt=0;
	if(a==1)
	{
		return 1;
	}
	if(n[a]!=0)
		return n[a];
	else
	{
		tt=2*han(a-1)+1;
		if(tt>99999)
			tt=tt%100000;
		n[a]=tt;
		return tt;
		
	}
}
















