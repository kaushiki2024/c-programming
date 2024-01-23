/*ramesh dearness allowance is 40% of basic salary and house rent allowance is 20% of basic salary. WAP to calcuate his gross salary */
#include<stdio.h>
int main()
{
    float bs,da,hra,gs;
    printf("enter the basic salary:");
    scanf("%f",&bs);
    da=0.4*bs;
    hra=0.2*bs;
    gs=bs+da+hra;
    printf("basic salary of ramesh:%f",bs);
    printf("dearness allowance:%f",da);
    printf("house rent allowance:%f",hra);
    printf("gross pay allowance:%f",gs);
    return 0;
}
