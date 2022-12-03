// Write a programe to findout average and sum for 5 students marks
#include <stdio.h>
void main()
{
    int student[5], count = 0,sum;
    float average;
    for (count = 0; count < 5; count++)
    {
        printf("Enter mark of student %d ", count + 1);
        scanf("%d", &student[count]);
    }
    for(count=0; count<5 ;count++)
    {
        printf("\nMarks of student %d are %d ",count+1,student[count]);
    }
    sum=0;
    for(count=0 ; count<5 ;count++)
    {
        sum=sum+student[count];
    }
    printf("\ntotal of marks are %d ",sum);
    average=sum/5;
    printf("\naverage of student is %f",average);
    printf("\nGoodbyee..");
}