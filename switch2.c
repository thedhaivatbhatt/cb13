// Write a programe to make a calc using switch case
// ->addition
// ->subtraction
// ->multiplication
// ->division
// ->modulas
// ->minimum
// ->maximum
// ->equality
#include <stdio.h>
void main()
{
    int num1, num2, option;
    float answer;
    printf("Enter value of num1 ");
    scanf("%d", &num1);
    printf("Enter value of num2 ");
    scanf("%d", &num2);

    printf("Enter 1 for addition \nEnter 2 for subtraction \nEnter 3 for multiplication \nEnter 4 for divison \nEnter 5 for modlus \nEnter 6 for minimum \nEnter 7 for maximum \nEnter 8 for equality ");
    scanf("%d",&option);
    switch (option)
    {
    case 1:
        answer = num1 + num2;
        printf("Your answer is %.2f",answer);
        break;
    case 2:
        answer = num1 - num2;
        printf("Your answer is %.2f",answer);
        break;
    case 3:
        answer = num1 * num2;
        printf("Your answer is %.2f",answer);
        break;
    case 4:
        answer = num1 / num2;
        printf("Your answer is %.2f",answer);
        break;
    case 5:
        answer = num1 % num2;
        printf("Your answer is %.2f",answer);
        break;
    case 6:
        if (num1 < num2)
        {
            printf("num1 is smaller ");
        }
        else if (num2 < num1)
        {
            printf("num2 is smaller ");
        }
        break;
    case 7:
        if (num1 > num2)
        {
            printf("num1 is greater ");
        }
        else if (num2 > num1)
        {
            printf("num2 is greater ");
        }
        break;
    case 8:
        if(num1==num2)
        {
            printf("num1 and num2 both are same ");
        }
        else
        {
            printf("both are not same ");
        }
    break;
    default:
    printf("Invalid choice ");
    break;
    }
    printf("\nGoodbyee...");
}