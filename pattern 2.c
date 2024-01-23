#include<stdio.h>
int main()
{
    int i,j,k;
    int p=0,m=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=p;j++)
        printf(" ");
        for(k=1;k<=m;k++)
        printf("*");
        m=m-2;
        p++;
        printf("\n");
    }
    return 0;
}
