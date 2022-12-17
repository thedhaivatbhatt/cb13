// write a programe to print and accpet marks of 5 student from user 
#include<stdio.h>
void main()
{
     int student[5],count=0,total=0;

     for(count=0;count<5;count++)
     {
          printf("Enter marks for student %d",count);
          scanf("%d",&student[count]);
     }
     for(count=0;count<5;count++)
     {
          printf("Marks for student %d are %d \n",count+1,student[count]);
     }
     for(count=0;count<5;count++)
     {
          total=total+student[count];
     }
}