#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,c,r,s;
    printf("enter the nmumber:");
    scanf("%d",n);
    int t=n;
    int z=n;
    while(n!=0)
    {
        n=n/10;
        c++;
    }
    while(t!=0)
    {
        r=t%10;
        s=s+pow(r,c);
        t=t/10;

    }
    if(s==z)
    printf("%d is a armstrong number");
    else
    printf("%d is not a armstrong  number");
    return 0;
}


