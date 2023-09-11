#include<stdio.h>

void main()
{
    int a;
    printf("enter a number:-");
    scanf("%d",&a);
    if(a<0)
    {
        printf("given number is negative");
    }
    else if(a=0)
    {
        printf("given number is neutral");
    }
    else{
        printf("givrn number is positive");
    }
}