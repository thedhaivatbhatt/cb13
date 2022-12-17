// Write a programe to take input of five country time in hours , minutes.second , first_letter of country 
#include<stdio.h>
#include<stdlib.h>
struct time
{
    int hours;
    float minutes_second;
    char name;
}country3;
void main()
{
    struct time country1,country2;
    printf("Enter country1 hours ");
    scanf("%d",&country1.hours);
    printf("Enter country 1 minutes and seconds ");
    scanf("%f",&country1.minutes_second);
    fflush(stdin);
    printf("Enter country 1 first letter ");
    scanf("%c",&country1.name);
    printf("Enter country2 hours ");
    scanf("%d",&country2.hours);
    printf("Enter country 2 minutes and seconds ");
    scanf("%f",&country2.minutes_second);
    fflush(stdin);
    printf("Enter country 2 first letter ");
    scanf("%c",&country2.name);
    printf("Enter country3 hours ");
    scanf("%d",&country3.hours);
    printf("Enter country 3 minutes and seconds ");
    scanf("%f",&country3.minutes_second);
    fflush(stdin);
    printf("Enter country 3 first letter ");
    scanf("%c",&country3.name);
    printf("the time of country 1 is hours : %d , minutes.second : %f and first letter: %c ",country1.hours,country1.minutes_second,country1.name);
   printf("\nthe time of country 2 is hours : %d , minutes.second : %f and first letter: %c ",country2.hours,country2.minutes_second,country2.name);
    printf("\nthe time of country 3 is hours : %d , minutes.second : %f and first letter: %c ",country3.hours,country3.minutes_second,country3.name);
}