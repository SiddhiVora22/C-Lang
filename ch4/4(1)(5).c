#include <stdio.h>
void main()
{
  
  float si, p, r;
  int t;
  

  printf("Enter P: ");
  scanf("%f", &p);
  
  printf("Enter R: ");
  scanf("%f", &r);
  
  printf("Enter T: ");
  scanf("%d", &t);
  
  
  si = (p * r * t) / 100;
  
 
  printf("SI = %f\n", si);
  
  printf("End of code\n");

}