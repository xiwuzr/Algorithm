#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	char name[20];
	struct student *next;
}stu;
int icont=0;
stu* create()
{
	stu *pHead=NULL;
	stu *pend,*pnew;
	pend=pnew=(stu*)malloc(sizeof(stu));
	while(scanf("%s",pnew->name)!=EOF)
	{
		icont++;
		if(icont==1)
		{
			pnew->next=NULL;
			pHead=pnew;
			pend=pnew;
			
		}
		else
		{
			pnew->next=NULL;
			pend->next=pnew;
			pend=pnew;
		}
		pnew=(stu*)malloc(sizeof(stu));
	}
	free(pnew);
	return pHead;
	
}

void print(stu *pHead)
{
	stu *tmp;
	tmp=pHead;
	while(tmp!=NULL)
	{
		printf("%s",tmp->name);
		printf("\n");
		tmp=tmp->next;
	}
}

void add(stu *pHead,int i) 
{
	stu *new,*tmap;
	int top;
	tmap=pHead;
	new=(stu*)malloc(sizeof(stu));
	scanf("%s",new->name);
	for(top=1;top<i;tmap=tmap->next)
	{
		top++;
	}
	new->next=tmap->next;
	tmap->next=new;
}

void cut(stu *pHead,int i)
{
	stu *new,*tmap;
	int top;
	tmap=pHead;
	for(top=1;top<i-1;tmap=tmap->next)
	{
		top++;
	}
	new=tmap->next;
	tmap->next=new->next;
	
}
main()
{
	int n; 
	stu *pHead;
	pHead=create();
	print(pHead);
	printf("\n\n\n where?\n:");                  //位置 
	scanf("%d",&n);
	add(pHead,n);                               //插入链表
	print(pHead);                              //输出新链表
	printf("\n\n\nwhere????\n:");
	scanf("%d",&n);
	cut(pHead,n);
	print(pHead);
	
}
