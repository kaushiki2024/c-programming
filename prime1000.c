#include<stdio.h>
int main()
{
    int i,n,c;
    for(n=1;n<=10000;n++)
    {
        c=0;
        for(i=1;i<=n;i++)
    {
        if(n%i==0)
            c++;
    }
        if(c==2)
        printf("%d \t",n);
        
    }
    return 0;
}   
