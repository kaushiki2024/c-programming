#include<stdio.h>
int main()
{
    int a,b,c;
    printf("\nenter the dimension:");
    scanf("%d %d",&a,%b); 
    int i,n;
    printf("enter number of sheet you want\n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      if(a!=0)
    {
        int c=a;
        a=b;
        b=c/2;
        printf("\n\n A %d= %d+%d",i,a,b);
    }
    else
    break;
    }

    printf("\n\n the end of program thank you1!!\n");
}







    
    