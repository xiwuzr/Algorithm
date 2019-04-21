#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		float x1,x2,y1,y2,kk;
		scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
		kk=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
		printf("%.2f\n",kk);
		
	}
}
