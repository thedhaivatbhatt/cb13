// Write a programe to make a menu driven clac using characters
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int num1, num2;
    float answer;
    char choice='c';
    while(choice=='c')
    {
        printf("\nEnter value of num1 ");
        scanf("%d", &num1);
        printf("\nEnter value of num2 ");
        scanf("%d", &num2);
        printf("\nEnter 1 for addition");
        printf("\nEnter 2 for subtraction");
        printf("\nEnter 3 for multiplication");
        printf("\nEnter 4 for division ");
        fflush(stdin);
        scanf("%c", &choice);
        if (choice == '1')
        {
            answer = num1 + num2;
            printf("Answer is %f ", answer);
        }
        else if (choice == '2')
        {
            answer = num1 - num2;
            printf("Answer is %f ", answer);
        }
        else if (choice == '3')
        {
            answer = num1 * num2;
            printf("Answer is %f ", answer);
        }
        else if (choice == '4')
        {
            answer = num1 / num2;
            printf("Answer is %f ", answer);
        }
        else
            printf("Invalid input ");
        fflush(stdin);
        printf("\nSelect your way \nPress c for countinue \nPress e for exit ");
        scanf("%c", &choice);
    }
    printf("goodbyee....");
}