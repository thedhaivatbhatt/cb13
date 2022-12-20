// Example of pointer 
#include<stdio.h>
void main()
{
    int myarray[10],count=0;

    int *pointer[10];

    for(count=0;count<10;count++)
    {
        pointer[count] = &myarray[count];
        printf("\nthe address of location %d is %u ",count,pointer[count]);
    }    
}