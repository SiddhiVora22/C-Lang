#include<stdio.h>

void main()
{
    int SALARY;
    int HAR;
    int DA;
    int TA;
    int GROSS;
    printf("Enter the SALARY\n");
    scanf("%d",&SALARY);
    printf("Enter the HAR\n");
    scanf("%d",&HAR);
    printf("Enter the DA\n");
    scanf("%d",&DA);
    printf("Enter the TA\n");
    scanf("%d",&TA);

    GROSS=SALARY+HAR+DA+TA;
    printf("GROSS =%d",GROSS);
    

}