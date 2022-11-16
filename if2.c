// Write a programe to print "you are short" if user's height is below 5.5
#include<stdio.h>
void main()
{
    float height;

    printf("Enter your height ");
    scanf("%f",&height);
    if(height <= 5.5)
    {
        printf("you are short ");
    }

    printf("Goodbyee..");
}