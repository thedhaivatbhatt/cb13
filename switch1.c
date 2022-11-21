// switch(/*name of vairable */)
// {
//     case 10:
//     //lines of code 
//     break;

//     case 14:
//     //lines of code
//     break;

//     case 15:
//     //lines of code 
//     break;

//     default:

//     break;
// }
// Write a programe to findout whether the given alphabet is vowel or not 
#include<stdio.h>
void main()
{
    char letter;
    printf("Enter any one letter ");
    scanf("%c",&letter);
    switch(letter)
    {
        case 'a':
        // case 'e':
        printf("it is vowel ");
        break;
        case 'e':
        printf("it is vowel ");
        break;
        case 'i':
        printf("it is vowel ");
        break;
        case 'o':
        printf("it is vowel ");
        break;
        case 'u':
        printf("it is vowel ");
        break;
        case 'A':
        printf("it is vowel ");
        break;
        case 'E':
        printf("it is vowel ");
        break;
        case 'I':
        printf("it is vowel ");
        break;
        case 'O':
        printf("it is vowel ");
        break;
        case 'U':
        printf("it is vowel ");
        break;
        default:
        printf("it is a constant ");
        break;
    }
    printf("Goodbyee..");
}