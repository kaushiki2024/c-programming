#include<stdio.h>
int main()
{
    int n,a,b,area;
    printf("enter your choice \n press 1 for even or odd");
    printf("\n press 2 for year is leap year or not");
    printf(" \n press 3 for area of rectangle\n");
    scanf("%d",&n);

    switch(n)
    {
    
        case 1:
        {
        printf("enter the value of number:");
         scanf("%d",&a);
        if(a%2==0)
        printf("the number is even==%d",a);
        else 
        printf("the number is odd==>%d",a);
        break;
        }



    
    
        case 2:
        {
        printf("\nenter the year:");
        scanf("%d",&a);
        if((a%4==0 && a%100!=0)||(a%400==0))
        printf("%d is a leap year",a);
        else 
        printf("%d is not a leap year",a);
        break;
        }
    
            case 3:
        {
        printf("\nenter the side:");
        scanf("%d%d",&a,&b);
        area=a*b;
        printf("  area of rectangle is=>%d",area);
        break; 
        } 
    
    
        default:
        printf("invalid choice");
    }
    
    return 0;
}