// Write a programe to findout wether the user given year is a millienum year 
// 1000,2000,3000,4000,5000
#include<stdio.h>
void main()
{
    int year;

    printf("Enter any year ");
    scanf("%d",&year);

    if(year % 1000 == 0)
    {
        printf("it is a millienum year ");
    }
    else
    {
        printf("it is not a millienum year ");
    }
    printf("\nGoodbyee..");
}