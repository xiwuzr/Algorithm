#include<stdio.h>
#include<string.h>

int kk(char ch[]);
int gg(char ch[]);
int mini(int a,int b);

int main()
{
	int kkk;
	scanf("%d",&kkk);
	while(kkk--)
	{
		char ch[101];
		scanf("%s",ch);
		int k;
		k=mini(gg(ch),kk(ch));
		printf("%d\n",k);
	}
}

int kk(char ch[])
{
	int i,j,k,sum=0;
		int p=0,q;
		char ch1[101];
		int len=strlen(ch);
		for(i=0;i<len;i++)
		{
			if(ch[i]=='(')
			{
				if(ch[i+1]==']'&&i+1!=len)
				{
					sum++;
					continue;
				}
				else
				{
					ch1[p]=ch[i];
					p++;
				}
			}
			if(ch[i]=='[')
			{
				if(ch[i+1]==')'&&i+1!=len)
				{
					sum++;
					continue;
				}
				else
				{
					ch1[p]=ch[i];
					p++;
				}
			}
			if(ch[i]==')')
			{
				if(p-1<0)
					sum++;
				
				if(p-1>=0)
				{
					if(ch1[p-1]=='(')				
					{
						p--;
					}
					else
					{
						sum++;
					}
				}
			}
			if(ch[i]==']')
			{
				if(p-1<0)
					sum++;
				
				if(p-1>=0)
				{
					if(ch1[p-1]=='[')				
					{
						p--;
					}
					else
					{
						sum++;
					}
				}
			}
		}
		ch1[p]='\0';
		sum=sum+strlen(ch1);
		return sum;
}
int gg(char ch[])
{
	int i,j,k,sum=0;
		int p=0,q;
		char ch1[101];
		int len=strlen(ch);
		for(i=0;i<len;i++)
		{
			if(ch[i]=='('||ch[i]=='[')
			{
				ch1[p]=ch[i];
				p++;
			}
			if(ch[i]==')')
			{
				if(p-1<0)
					sum++;
				
				if(p-1>=0)
				{
					if(ch1[p-1]=='(')				
					{
						p--;
					}
					else
					{
						sum++;
					}
				}
			}
			if(ch[i]==']')
			{
				if(p-1<0)
					sum++;
				
				if(p-1>=0)
				{
					if(ch1[p-1]=='[')				
					{
						p--;
					}
					else
					{
						sum++;
					}
				}
			}
		}
		ch1[p]='\0';
		sum=sum+strlen(ch1);
		return sum;
}
int mini(int a,int b)
{
	if(a<b)
		return a;
	return b;
}