#include<stdio.h>
main()
{
	int a,n,m,k;
	float B;
	scanf("%d",&a);
	while(a--)
	{
		scanf("%d%d",&n,&m);
		B=(4*n-m)/2.0;
		k=B;
		if(k==B&&B>=0&&n-k>=0)
		{
			printf("%d %d\n",k,n-k);
		}
		else
		printf("No answer\n");
		
	}
	
}
