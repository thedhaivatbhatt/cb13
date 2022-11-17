// Write a programe to findout whether the given alphabet is vowel or not without using else if
#include<stdio.h>
void main()
{
    char letter;

    printf("Enter value of letter ");
    scanf("%c",&letter);

    if(letter == 'a' || letter == 'e' || letter == 'o' || letter == 'i' || letter == 'u' || letter == 'A' || letter == 'I' || letter == 'O' || letter=='U'){
        printf("it is vowel ");
    }
    else
    {
        printf("it is consonent ");
    }
    printf("Goodbyee..");
}