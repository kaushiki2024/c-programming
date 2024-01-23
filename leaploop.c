#include<stdio.h>
int main()
{
	int i;
	printf(" leap year between 1000 to 4000 \n");
	for(i=1000;i<=4000;i++)
	{
		      if((i%4==0 && i%100!=0)||(i%400==0))

		  
		{
			printf("%d \n",i);
		}
	}
}
