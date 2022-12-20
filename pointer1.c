// Example of pointer 
#include<stdio.h>
void main()
{
    int number1=100,number2=200;
    int *pointer1 = &number1;
    int *pointer2 = &number2;

    printf("the address of number 1 is %p ",pointer1);
    printf("\nthe address of number 2 is %p ",pointer2);

}