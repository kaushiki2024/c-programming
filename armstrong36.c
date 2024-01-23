#include<stdio.h>
#include<math.h>
int main()
{
    int n,c=0,r,s=0,t;
    printf("enter the number:");
    scanf("%d",&n);
     t=n;
    while(t!=0)
    {
        t=t/10;
        c++;
    }
     t=n;
    while(n!=0)
    {
        r=n%10;
        s=s+pow(r,c);
        n=n/10;

    }
    if(s==t)
    printf("%d is an armstrong number",t);
    else
    printf("%d is not an armstrong  number",t);
    return 0;
}


