#include<stdio.h>
//program to print smallest of two numbers//
int main()
{
  float a,b;
  printf("enter two numbers \n");
  scanf("%f,%f",&a,&b);
  if(a>b)
  printf("b is smallest");
  else
  printf("a is smallest");
  return 0;
}