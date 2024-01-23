#include<stdio.h>
int main()
{
    int a[3],i;
    printf("enter the elements of array\n:");
    for(i=0;i<3;i++)
    scanf("%d",&a[i]);
    int max=a[0];
    for(i=0;i<3;i++)
    {
    if(max<a[i])//to print smallest element in array 
    max=a[i];
    }
    printf("greatest element==>%d",max);
    return 0;
}
