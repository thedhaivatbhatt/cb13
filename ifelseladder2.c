// Write a programe to findout how many days a month has accpet month from user 
#include<stdio.h>
void main()
{
    int month;

    printf("Enter your month ");
    scanf("%d",&month);
    if(month==1)
    {
        printf("it has 31 days ");
    }
    else if(month==2)
    {
        printf("it has 28/29 days ");
    }
    else if(month==3)
    {
        printf("it has 31 days ");
    }
    else if(month==4)
    {
        printf("it has 30 days ");
    }
    else if(month==5)
    {
        printf("it has 31 days ");
    }
    else if(month==6)
    {
        printf("it has 30 days ");
    }
    else if(month==7)
    {
        printf("it has 31 days ");
    }
    else if(month == 8)
    {
        printf("it has 31 days ");
    }
    else if(month == 9)
    {
        printf("it has 30 days ");
    }
    else if(month== 10)
    {
        printf("it has 31 days ");
    }
    else if(month == 11)
    {
        printf("it has 30 days");
    }
    else if(month==12)
    {
        printf("it has 31 days ");
    }
    else 
    {
        printf("Invalid input ");
    }
    printf("\nGoodbyee...");
}