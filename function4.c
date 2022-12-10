// example of function without argument with retrun 
// Write a programe to find area of cricle 
#include<stdio.h>
float getpi()
{
    float pi = 3.141592;
    return pi;
}
void main()
{
    float radius,pi,answer;
    printf("Enter value of radius ");
    scanf("%f",&radius);
    pi = getpi();
    answer=radius*radius*pi;
    printf("the area of circle is %f ",answer);
}