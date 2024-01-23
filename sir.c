#include<stdio.h>
#include<math.h>


int main()
{
    int i,n;
    float x;
    x=0;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        x=x+sqrt(x);
    }
    printf("ans===>%f",x);
    return 0;
}

