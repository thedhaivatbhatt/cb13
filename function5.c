// Write a programe to create a calc
#include <stdio.h>
int getaddition(int num1,int num2)
{
    return num1+ num2;
}
int getsubtraction(int num1,int num2)
{
    return num1 - num2;
}
int getmultiplication(int num1,int num2)
{
    return num1 * num2;
}
float getdivision(int num1,int num2)
{
    return num1 / num2;
}
float getmodlus(int num1,int num2)
{
    return num1 % num2;
}
void max(int num1,int num2)
{
    if(num1>num2)
    {
        printf("value of num1 is greater ");
    }
    else if(num2>num1)
    {
        printf("value of num2 is greater ");
    }
}
void min(int num1,int num2)
{
    if(num1<num2)
        printf("the value of num1 is smaller ");
    else if(num2<num1)
        printf("the vlaue of num2 is smaller ");
}
void equality(int num1,int num2)
{
    if(num1==num2)
        printf("the value of num1 and num2 is equall");
    else  
        printf("the value of num1 and num2 is not equall ");
}
void main()
{
    int num1, num2, option,Continue=1;
    float answer;
    do 
    {
        printf("Enter value of num1 ");
    scanf("%d", &num1);
    printf("Enter value of num2 ");
    scanf("%d", &num2);
    printf("\nEnter 1 for addition ");
    printf("\nEnter 2 for subtraction ");
    printf("\nEnter 3 for multiplication ");
    printf("\nEnter 4 for division ");
    printf("\nEnter 5 for modlus ");
    printf("\nEnter 6 for max ");
    printf("\nEnter 7 for min ");
    printf("\nEnter 8 for equality ");
    printf("\nSelect any one from above ");
    scanf("%d",&option);
    switch(option)
    {
        case 1:
         answer=getaddition(num1,num2);
         printf("the value of answer is %f ",answer);
        break;
        case 2:
        answer=getsubtraction(num1,num2);        
         printf("the value of answer is %f ",answer);
        break;
        case 3:
        answer=getmultiplication(num1,num2);
         printf("the value of answer is %f ",answer);
        break;
        case 4:
        answer=getdivision(num1,num2);
         printf("the value of answer is %f ",answer);
        break;
        case 5:
        answer=getmodlus(num1,num2);
         printf("the value of answer is %f ",answer);
        break;
        case 6:
        max(num1,num2);
        break;
        case 7:
        min(num1,num2);
        break;
        case 8:
        equality(num1,num2);
        break;
        default:
        printf("invalid input ");
        break;
    }
    printf("Select any one \n1 for continue \n2 for exit ");
    scanf("%d",&Continue);
    if(Continue<1 && Continue>2)
    {
        printf("invlaid choice ");
        break;
    }
    }
    while(Continue==1);
}