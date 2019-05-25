#include<stdio.h>
#include <memory.h>
int a[50000];
int b[50000];
int *d;
int j_a;
int j_b;
int c[50000];
void cheng()
{
    memset(c, 0, sizeof(int)*50000);
    int i,j;
    for(i=0;i<j_a;i++)
    {
        for(j=0;j<j_b;j++)
        {
            int book;
            book=a[i]*b[j]+c[i+j];
            c[i+j]=(book%10);
            c[i+j+1]+=book/10;
        }
    }
    if(c[i+j+1]==0)
    {
        j_a=i+j;
    }
    else
        j_a=i+j+1;
    memcpy(a,c,50000*sizeof(int));
}
int main()
{
    int j,i;
    scanf("%d",&j);
    if(j==0)
    {
        printf("1\n");
        return;
    }
    a[0]=1;
    j_a=1;
    for(i=1;i<=j;i++)
    {
        int k=i;
        j_b=0;
        while(k)
        {
            b[j_b]=k%10;
            k/=10;
            j_b++;
        }
        cheng();
    }
    int uu=0;
    for(i=j_a;i>=0;i--)
    {
        if(c[i]!=0)
        {
            uu=1;
            break;
        }
    }
        for(i;i>=0;i--)
        {
            printf("%d",c[i]);
        }
        printf("\n");
}