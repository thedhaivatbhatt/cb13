// Write a programe to findout area of rectagnle usign scanf take lenght and breath as input
#include<stdio.h>
void main()
{
    int length,breath,answer;

    printf("Enter value of length ");
    scanf("%d",&length);
    printf("Enter value of breath ");
    scanf("%d",&breath);

    answer = length* breath;
    printf("\nThe value of answer is %d ",answer);
}