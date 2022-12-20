// Example of pointer 
#include<stdio.h>
void main()
{
    int number1=100,number2=200,number3;
    int *pointer1 = &number1;
    int *pointer2 = &number2;
    int *pointer3 = &number3;
    printf("the address of number 1 is %x ",pointer1);
    printf("\nthe address of number 2 is %p ",pointer2);
    printf("\nthe address of number 3 is %u ",pointer3);
    printf("\n\nthe value of number 1 is %d",*pointer1);
    printf("\n\nthe value of number 2 is %d",*pointer2);
    printf("\n\nthe value of number 3 is %d",*pointer3);
    
}