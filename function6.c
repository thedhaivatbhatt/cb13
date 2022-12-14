// Write a programe to find bmi of user using function 
// bmi = weight / (height*height);
#include<stdio.h>
float foot_to_inch(int foot)
{
    // int answer;
    // answer = foot*12;
    // return answer;
    return foot*12;
}
float getadd(int inch,float Inchfoot)
{
    return inch + Inchfoot;
}
float inch_to_meter(float h)
{
    float answer ;
    answer = h / 39.37;
    return answer;
}
float getBmi(float w,float h)
{
    float answer;
    answer = w / (h * h); 
    printf("the value of bmi is %f \n",answer);
    return answer;
}
void get_category(float bmi)
{
    if(bmi < 18.5)
    {
        printf("you are under weight ");
    }
    else if(bmi >= 18.5 && bmi <=24.9)
    {
        printf("you are normal weight ");
    }
    else if(bmi>=25 && bmi<=29.9)
        printf("you are over weight ");
    else if(bmi >=30 && bmi<=34.9)
        printf("you are obese ");
    else if(bmi >=35)
        printf("you are extremely obese ");
}
void main()
{
    float weight,Inchfoot,height,bmi;
    int foot,inch;
    printf("Enter value of weight ");
    scanf("%f",&weight);
    printf("Enter value of height in foot ");
    scanf("%d",&foot);
    printf("Enter value of height in inch ");
    scanf("%d",&inch);
    Inchfoot=foot_to_inch(foot);
    // printf("The value of Inchfoot is %f ",Inchfoot);
    height = getadd(inch,Inchfoot);
    // printf("\nThe value of height is %f ",height);
    height = inch_to_meter(height);
    // printf("\nThe value of height after meter is %f",height);
    bmi=getBmi(weight,height);
    get_category(bmi);
}