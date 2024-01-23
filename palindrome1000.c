#include<stdio.h>
int main()
{
    int i,n,c,z,r,s=1;
    for(n=1;n<=1000;n++)
    {
    z=n;
    while(z!=0)
    {
    r=z%10;
    s=s*10+r;
    z=z/10;
    }
        if(n==s)
        printf("%d \n",s);
    }
    return 0;
}   
