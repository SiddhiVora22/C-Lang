#include<stdio.h>

void main(){
int a,b;



printf("enter is ",a);
scanf("%d",a);
printf("enter is",b);
scanf("%d",&b);
a = a-b;
b = a+b;
a = b-a;
printf("after swap a =%d\n",a);
printf("after swap b =%d\n",b);

}