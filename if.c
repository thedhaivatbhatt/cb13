// == , != <, >, <= , >=
// Write a programe to find sqaure of user given number only if it is a positive number 
#include<stdio.h>
void main()
{
    int number,answer;

    printf("Enter value of number ");
    scanf("%d",&number);

    if(number > 0)
    {
        answer=number*number;
        printf("the value of answer is %d",answer);
    }

    printf("\nGoodbyee..");
}