#include<stdio.h>
int main()
{
    int i,j,p=5,m=0,k;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=p;j++)
        printf("*");
        for(k=1;k<=m;k++)
        printf(" ");
        for(j=1;j<=p;j++)
        printf("*");
        p--;
        m=m+2;
        printf("\n");
    }
       p=1,m=8;
    
       for(i=1;i<=5;i++)
       {

       for(j=1;j<=p;j++)
        printf("*");
        for(k=1;k<=m;k++)
        printf(" ");
        for(j=1;j<=p;j++)
        printf("*");
        p++;
        m=m-2;
        printf("\n");
       }
       return 0;
}