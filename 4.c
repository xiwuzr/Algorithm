#include<stdio.h>
#include<string.h>

char ch1[100],ch2[100],ch3[100];
int l1,l2,l3;

int pan(int mm)
{
	int i,j=0,k;
	int bbb;
	for(i=mm;i<mm+l2;i++)
	{
		if(ch1[i]!=ch2[j])
		{
			return 0;
		}
		j++;
	}
	return 1;
	
	
}

int main()
{
	scanf("%s%s%s",ch1,ch2,ch3);
	
	l1=strlen(ch1);
	l2=strlen(ch2);
	l3=strlen(ch3);
	int p,q,i,j,k;
	p=0;
	for(i=0;i<l1;)
	{
		k=0;
		if(ch1[i]==ch2[0])
		{
			k=pan(i);
		}
		if(k==1)
		{
			for(j=0;j<l3;j++)
			{
				printf("%c",ch3[j]);
			}
			i=i+l2;
			continue;
		}
		printf("%c",ch1[i]);
		i++;
	}
	
	
}








