#include<stdio.h>
int main()
{
    int y;
    printf("\nenter the year:");
    scanf("%d",&y);

      if((y%4==0 && y%100!=0)||(y%400==0))
      printf("%d is a leap year",y);
      else 
      printf("%d is not aleap year",y);
    return 0;

    
}







    
    