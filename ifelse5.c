// && - and
// || - or
// write a programe to findout which number is greater out of given three number
#include <stdio.h>
void main()
{
    int num1, num2, num3;
    printf("Enter value of num1 ");
    scanf("%d", &num1);
    printf("Enter value of num2 ");
    scanf("%d", &num2);
    printf("Enter value of num3 ");
    scanf("%d", &num3);

    if(num1>num2 && num1>num3)
    {
        printf("num1 is greater ");
    }
    else if(num2>num1 && num2>num3)
    {
        printf("num2 is greater ");
    }
    else if(num3>num1 && num3>num2)
    {
        printf("num3 is greater ");
    }
    else 
    {
        printf("all are same ");
    }
}