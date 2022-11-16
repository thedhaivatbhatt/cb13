// Write a programe to peform swap without using thir variable 
#include<stdio.h>
void main()
{
    int a,b;

    a=132;
    b=999;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The value of num1 is %d and num2 is %d",a,b);
}