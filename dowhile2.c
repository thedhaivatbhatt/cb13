// Write a porgrame to find factorial of user given number
#include <stdio.h>
void main()
{
    int number, answer, temp;
    printf("Enter value of number ");
    scanf("%d", &number);
    answer = number * (number - 1);
    temp = number - 2;
    if (number < 0)
    {
        printf("invalid input");
    }
    else
    {
        if (number <= 2)
        {
            printf("%d ", number);
        }
        else
        {
            do
            {
                answer = answer * temp;
                temp--;
            } while (temp > 0);
            printf("The value of answer is %d ", answer);
        }
    }
}