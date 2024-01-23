#include<stdio.h>
int main()
{
    int a,b,c;
printf("enter the 3 value of number:");
         scanf("%d%d%d",&a,&b,&c);
         int max;
         max=a;
        if(b>max)
        max=b;
        if(c>max)
        max=c;
        
        printf("the number largeset==>%d",max);
}