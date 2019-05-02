#include<stdio.h>

int ys(int year)
{
	if(year%4==0&&year%100!=0)
		return 1;
	if(year%400==0)
		return 1;
	return 0;
}
int ms[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

int main()
{
	int kkk;
	scanf("%d",&kkk);
	while(kkk--)
	{
		int y,m,d;
		scanf("%d%d%d",&y,&m,&d);
		int i,j,k;
		int sum=0;
		ms[2]=28+ys(y);
		for(i=1972;i<y;i++)
		{
			sum=ys(i)+365+sum;
		}
		for(i=1;i<m;i++)
		{
			sum=sum+ms[i];
		}
		sum+=d;
		printf("%d\n",sum-1);
	}
	
}







