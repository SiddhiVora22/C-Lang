#include<stdio.h>

void main()
{
	int a,b;
	printf("enter year:-");
	scanf("%d",&a);
	printf("enter year:-");
	scanf("%d",&b);
	
	while(a<=b)
	{
		printf("%d\n",a);
		a=a+4;
	}
}
