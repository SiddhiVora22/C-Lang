#include<stdio.h>

void main(){
 
      int a,b,c;

      printf("Enter a value of the first number:-");
      scanf("%d",&a);
      printf("Enter a value of the second number:-");
      scanf("%d",&b);
      printf("Enter a value of the third number:-");
      scanf("%d",&c);

      (a>b)
        ?(a>c)
            ? printf("a is max...")
            :printf("c is max...")
        :(b>c)
            ?printf("b is max...")
            :printf("c is ma...");
            
}