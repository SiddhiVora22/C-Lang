#include<stdio.h>

void main()
{
    int a;
    int b;
    printf("enter a number:");
    scanf("%d",&a);

    printf("enter a number:");
    scanf("%d",&b);
    if(a<b){
        printf("A is min");
    }else{
           printf("b is min");
    }
    
}