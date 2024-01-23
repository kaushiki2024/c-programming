#include<stdio.h>
#include<math.h>
int main()
{
    float t,v,wcf;
    scanf("%f %f",&t,&v);
    wcf=(35.74)+(0.6215*t)+(0.42750*t-35.75)*pow(v,0.16);
    printf("%f",wcf);
    return 0;
}
