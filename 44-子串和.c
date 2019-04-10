#include <stdio.h>

int main(){
	int t, n, max, a, temp;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		scanf("%d", &a);
		max = temp = a;
		while(--n)
		{
			scanf("%d", &a);
			temp += a;
			if(temp > max)
				max = temp;
			else if(temp < 0) 
				temp = 0;			
		}
		printf("%d\n", max);
	}
	return 0;
}        