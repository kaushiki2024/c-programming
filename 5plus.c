 #include<stdio.h>
 int main()
 {
    int n,d5,d4,d3,d2,d1;
    long int sum;
    printf("enter a five digit number:");
    scanf("%d",&n);
    d5=n%10;
    n=n/10;
    d4=n%10;
    n=n/10;
    d3=n%10;
    n=n/10;
    d2=n%10;
    n=n/10;
    d1=n%10;
    sum=d5+d4+d3+d2+d1;
    printf("the sum of 5 digit number is  %ld \n",sum);
    return 0;
 }
