// Example of modlus - % 
// Write a programe to split one 2digit number into two 
// number=56
// first = 5 , second = 6
#include<stdio.h>
void main()
{
    int number,first,second;
    printf("the value of number ");
    scanf("%d",&number);
    first=number/10;
    second=number%10;
    printf("the value of first is %d and second is %d",first,second);
}