// Write a programe to find division of 2 numbers
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int number;
    float num1;
    char letter;

    printf("Enter value of number ");
    scanf("%d",&number);
    printf("Enter value of num1 ");
    scanf("%f",&num1);
    printf("Enter value of letter ");
    fflush(stdin);
    scanf("%c",&letter);

    printf("\nthe value of number %d",number);
    printf("\nthe value of letter is %c ",letter);
    printf("\nthe value of num1 is %.3f ",num1);
}