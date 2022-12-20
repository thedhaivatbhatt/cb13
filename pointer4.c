// Example of pointer 
#include<stdio.h>
struct student
{
    int age;
    float percentage;
};
void display(struct student *pointer)
{
    printf("the address of pointer is %u ",pointer);
}
void show(int name)
{
    printf("the address of pointer is ");
}
void main()
{
  struct student s1;
  int pointer2;
  struct student *pointer=&s1;
  printf("\nThe location of pointer is %u ",pointer);  
  display(pointer);
  void(*pointer2)(int) = &display;
  printf("\nthe location of display is %u ",pointer2);
}