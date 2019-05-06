#include<stdio.h>
#include<string.h>
int p,q;
int lench,lencc;
char ch[20],cc[20];
int zhao();
int suan();
int main()
{
	scanf("%s%s",ch,cc);
	lench=strlen(ch);
	lencc=strlen(cc);
	int i,j,k;
	int min=999;
	int tmp;
	for(p=0;p<=lench-lencc;p++)
	{
		int nn=0;
		for(i=0;i<lencc;i++)
		{
			if(ch[p]==cc[i])
			{
				nn=1;
				break;
			}
		}
		if(nn==1)
		{
			tmp=zhao();
			if(tmp<min)
			{
				min=tmp;
			}
		}
	}
	printf("%d ",min);
}

int zhao()
{
	q=p-1+lencc;
	int tt;
	while(q<lench)
	{
		tt=suan();
		if(tt==1)
		{
			return q-p+1;
		}
		q++;
	}
	return 999;
}
int suan()
{
	int book[20]={};
	int m,n;
	m=p;
	n=q;
	int i,j,k;
	for(i=m;i<=n;i++)
	{
		for(j=0;j<lencc;j++)
		{
			if(ch[i]==cc[j])
			{
				book[j]=1;
			}
		}
	}
	for(i=0;i<lencc;i++)
	{
		if(book[i]==0)
		{
			return 0;
		}
	}
	return 1;

}





