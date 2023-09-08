#include<stdio.h>

void main()
{
    int x,y,z;
    printf("enter value of x");
    scanf("%d",&x);
    printf("enter value of y");
    scanf("%d",&y);

    z = (x*x) + (2 * x * y) + (y*y);
    printf("z=%d",z);
    
}