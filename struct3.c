// structure with array
#include<stdio.h>
struct student
{
     int rollno,total_marks;
     char name[25];
};
void main()
{
     struct student s1;

     printf("Enter value for student 1 enter name\n");
     scanf("%s",&s1.name);
     printf("Enter rollno for student 1");
     scanf("%d",s1.rollno);
     printf("Enter total marks of student 1");
     scanf("%d",s1.total_marks);
}