#include<stdio.h>
//program to check given character is digit or not//
int main()
{
    char gate;
    printf("enter character");
    scanf("%c",&gate);
    if (gate>=0 && gate<=9)
    printf("character is digit ");
    else
    printf("character is not digit ");
    return 0;
}

