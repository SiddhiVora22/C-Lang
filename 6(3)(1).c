#include<stdio.h>

void main()
{
	int a,b=0,ans,n;

	printf("enter value:");
	scanf("%d",&n);
	for (a=1;a<=n;a++)
	{
		b = b + a;
		printf("%d\n",a);
	}
	printf("ans is %d",b);
	
}
