#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,t,i,j,a[10],s;
    while(~scanf("%d",&n))
    {
        i=0;
        while(n)
        {
            t=n%10;
            n/=10;
            a[i++]=t;
            if(t>=4)
                a[i-1]--;
        }
        s=0;
        for(j=i-1; j>0; j--)
            s=(s+a[j])*9;
        s+=a[0];
        printf("%d\n",s);
    }
    return 0;
}
