// Write a programe to print 2 numbered triagnle
#include <stdio.h>
void main()
{
    int count = 0,flash=5,temp=1;
    while(flash>0)
    {
        while (count < flash)
        {
            printf("%d ",temp);
            count++;
        }
        printf("\n");
        count = 0;
        flash--;
        temp++;
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