#include<stdio.h>
#include<math.h>
int main()
{
    int sum=0,x,i,n,f,z=1;
    printf("enter the value of x");
    scanf("%d",&x);
    printf("enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    { 
        f=f*i;
        if(i%2==0)
        {
            sum=sum+pow(x,i)/f*z;
            z=z*(-1);
        }


    } 
    
    printf("%d",sum);
    return 0;
}