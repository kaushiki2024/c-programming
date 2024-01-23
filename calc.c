#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("enter your choice \n press 1 for addition:");
    printf("\n press 2 for subtraction");
    printf(" \n press 3 for multiplication\n press 4 for division\n");
    scanf("%d",&n);
   
    switch(n)
    {
    
        case 1:
        {
            int a,b,c;
         printf("enter any two number:");
         scanf("%d%d",&a,&b);
         c=a+b;
         printf("the addition of %d+%d=%d",a,b,c);
         break;
        }



    
    
        case 2:
        {
            int a,b,c;
        printf("\n enter any two number:");
        scanf("%d%d",&a,&b);
        c=a-b;
        printf("the subtraction of %d-%d=%d",a,b,c);
        break;
        }
    
            case 3:
        {
            int a,b,c;
        printf("\n enter any two number:");
        scanf("%d%d",&a,&b);
        c=a*b;
        printf("the multiplication of %d*%d=%d",a,b,c);
        break; 
        } 
        case 4:
        {
            int a,b,c;
        printf("\n enter any two number:");
        scanf("%d%d",&a,&b);
        c=a/b;
        printf("the division =%d",c);
        break; 
        
        }
    
    
        default:
        printf("invalid choice");
    }
    
    return 0;
}