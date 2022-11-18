// write a prorame to make calculator
// given option as below
// ->addition
// ->subtraction
// ->multiplication
// ->division
// ->modulas
// ->minimum
// ->maximum
// ->equality

#include<stdio.h>
void main()
{
    int num1,num2,option,answer;
    printf("Enter value of num1 ");
    scanf("%d",&num1);
    printf("Enter value of num2 ");
    scanf("%d",&num2);
    printf("\nEnter 1 for addition ");
    printf("\nEnter 2 for subtraction ");
    printf("\nEnter 3 for multiplication ");
    printf("\nEnter 4 for division ");
    printf("\nEnter 5 for modlus ");
    printf("\nEnter 6 for min ");
    printf("\nEnter 7 for max ");
    printf("\nEnter 8 for equality ");
    printf("\nSelect any one option from above ");
    scanf("%d",&option);
    if(option==1)
    {
        answer=num1+num2;
        printf("the value of answer %d ",answer);
    }
}