#include<stdio.h>

typedef struct student
{
	char name[20];
	int yw;
	int sx;
	int yy;
	int zf;
	int pj;
}stu;
main()
{
	FILE *fp;
	stu a[3],b,s[3];
	int i,j,k,n;
	for(i=0;i<3;i++)
	{
		printf("name:\n");
		gets(a[i].name);
		printf("yuwen:");
		scanf("%d",&a[i].yw);
		printf("shuxue:");
		scanf("%d",&a[i].sx);
		printf("yingyu:");
		scanf("%d",&a[i].yy);
		getchar();
		a[i].zf=a[i].yw+a[i].sx+a[i].yy;
		a[i].pj=a[i].zf/3;
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2-i;j++)
		{
			if(a[j].pj>a[j+1].pj)
			{
				b=a[j];
				a[j]=a[j+1];
				a[j+1]=b;
				
			}
		}
	}
	fp=fopen("xs.txt","wb");
	if(fp!=NULL)
	{
		fwrite(a,sizeof(stu),3,fp);
	}
	fclose(fp);
	fp=fopen("xs.txt","rt");
	if(fp!=NULL)
	{
		fread(s,sizeof(stu),3,fp);
	}
	
	for(i=0;i<3;i++)
	{
		printf("%s %d %d %d %d %d",s[i].name,s[i].yw,s[i].sx,s[i].yy,s[i].zf,s[i].pj);
	}
}