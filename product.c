#include<stdio.h>
int main()
{
    float pr,tax,gst,tp;
    printf("\nenter the price:");
    scanf("%f",&pr); 
    
    if(pr>100000)
    {
        tax=0.1*pr;
        gst=1.8*pr;
        tp=pr+tax+gst;
        printf("the total price of product is===>%f",tp);
    }
     else if(pr>=70000&&pr<100000)
    {
        tax=0.1*pr;
        gst=1.2*pr;
        tp=pr+tax+gst;
        printf("the total price of product is===>%f",tp);
    }
     else if(pr>=50000&&pr<70000)
    { 
        tax=0.08*pr;
        gst=0.1*pr;
        tp=pr+tax+gst;
        printf("the total price of product is===>%f",tp);
    }
     else
    {
        tax=0.05*pr;
        gst=0.07*pr;
        tp=pr+tax+gst;
        printf("the total price of product is===>%f",tp);
    }  
    return 0; 
}