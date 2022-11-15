// Write a programe to find bmi 
// bmi = kg/m2;
#include<stdio.h>
void main()
{
    float weight,meter,bmi,cm;
    printf("Enter value of weight ");
    scanf("%f",&weight);
    printf("Enter value of height in cm ");
    scanf("%f",&cm);
    meter=cm/100;
    printf("the value of meter is %f ",meter);
    bmi=weight/(meter*meter);
    printf("the value of bmi is %f ",bmi);
}