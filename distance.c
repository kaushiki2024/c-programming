/*wap to print distance between two cities in meters, feet, inches and centimeters */
#include<stdio.h>
int main()
{
    float meter,dis,feet,inch,centi;
    printf("enter the value of distance in kilometer:");
    scanf("%f",&dis);
    meter=dis*1000;
    centi=meter*100;
    inch =centi/2.24 ;
    feet =inch/12;
    printf(" distance in meter:%f\n",meter);
    printf(" distance in centimeter:%f\n",centi);
    printf(" distance in feet:%f\n",feet);
    printf("distance in inch:%f\n",inch);
    return 0;
}
