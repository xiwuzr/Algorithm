#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
	int num;
	struct Node* next;
}node;

void create(node* head)
{
	int a;
	scanf("%d",&a);
	node* pnew,*pend;
	pend=head;
	while(a)
	{
		pnew=(node*)malloc(sizeof(node));
		pnew->num=a;
		pend->next=pnew;
		pnew->next=NULL;
		pend=pnew;
		scanf("%d",&a);
	}
	return;
}

void print(node*head)
{
	while(head->next)
	{
		printf("%d ",head->next->num);
		head=head->next;
	}
	printf("\n");
}

void del(node* head,int n)
{
	int i,j,k;
	node*p,*q;
	p=head;
	q=p->next;
	for(i=1;i<n;i++)
	{
		p=p->next;
	}
	q=p->next;
	p->next=p->next->next;
	free(q);
}

void add(node *head,int m,int k)
{
	int i,j;
	node *new,*p,*q;
	p=head;
	for(i=1;i<=m;i++)
	{
		p=p->next;
	}
	new=(node*)malloc(sizeof(node));
	new->num=k;
	new->next=p->next;
	p->next=new;
		
}

int main()
{
	node* head=(node*)malloc(sizeof(node));
	head->next=NULL;
	create(head);
	print(head);
	printf("\n输入要删除的位置\n");
	int n;
	scanf("%d",&n);
	del(head,n);//删除
	print(head);
	int m,k;
	printf("\n插入位置，及插入数据\n");
	scanf("%d%d",&m,&k);
	add(head,m,k);
	print(head);
}





