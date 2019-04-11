#include <stdio.h>
#include <string.h>
 
char a[100010];
 
int main()
{
	int N,T;
	int total = 0,k;
	char str[10];
	scanf("%d%d",&N,&T);
	memset(a,'0',sizeof(a));
	while (T--)
	{
		scanf("%s",str);
		if (str[0] == 'C')
		{
			scanf("%d",&k);
			if (a[k] == '1')
			{
				total--;
				a[k] = '0';
			}
			else
			{
				a[k] = '1';
				total++;
			}
		}
		else
		{
			printf("%d\n",total);
		}
	}
	
}