// Write a programe to print 2 numbered triagnle
#include <stdio.h>
void main()
{
    int count = 0,flash=5;
    while(flash>0)
    {
        while (count < flash)
        {
            printf("%d ",count+1);
            count++;
        }
        printf("\n");
        count = 0;
        flash--;
    }
    // while (count < 5)
    // {
    //     printf("*");
    //     count++;
    // }
    // printf("\n");
    // count = 0;
    // while (count < 5)
    // {
    //     printf("*");
    //     count++;
    // }
    // printf("\n");
    // count=0;
    // while(count<5)
    // {
    //     printf("*");
    //     count++;
    // }
}