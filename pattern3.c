#include<stdio.h>
int main()
{
    int i,j,k;
    int p=1,m=8;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=p;j++)
        printf("*");
        for(k=1;k<=m;k++)
        printf(" ");
        m=m-2;
        p++;
        printf("\n");
    }
    int q=8,n=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=q;j++)
        printf(" ");
        for(k=1;k<=n;k++)
        printf("*");
        n=n+2;
        q--;
        printf("\n");
    }
    return 0;
}
