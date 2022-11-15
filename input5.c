// Write a programe to find bmi using foot and inch 
#include<stdio.h>
void main()
{
    int foot,inch;
    float weight,totalinch,meter,bmi;
    printf("Enter value of weight in kg");
    scanf("%f",&weight);
    printf("Enter value of foot ");
    scanf("%d",&foot);
    printf("Enter value of inch ");
    scanf("%d",&inch);
    totalinch=foot*12;
    totalinch=totalinch+inch;
    // printf("the value of total inch is %f ",totalinch);
    meter=totalinch/39.37;
    // printf("the value of meter is %f ",meter);
    bmi = weight/(meter*meter);
    printf("the value of bmi is %f ",bmi);
}