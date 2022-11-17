// write a program to findout whether given number is odd or even
#include<stdio.h>
void main()
{
    int number;
    printf("Enter value of number ");
    scanf("%d",&number);
    if(number % 2 == 0)
    {
        printf("it is even ");
    }
    else
    {
        printf("it is odd ");
    }
    printf("Goodbyee..");
}