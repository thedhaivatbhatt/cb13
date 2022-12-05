// Write a programe to sort an array
#include <stdio.h>
void main()
{
    int number[6], count = 0, temp,flash;
    while (count < 6)
    {
        printf("Enter number %d ", count + 1);
        scanf("%d", &number[count]);
        count++;
    }
    count = 0;
    do
    {
        printf("\nnumber %d is %d ", count + 1, number[count]);
        count++;
    } while (count < 6);
    for(flash=0;flash<7;flash++)
    {
        for (count = flash+1; count < 7; count++)
        {
            if (number[count] > number[flash])
            {
                temp = number[flash];
                number[flash] = number[count];
                number[count] = temp;
            }
        }
    }
    // for(count=2;count<7;count++)
    // {
    //     if (number[count] > number[1])
    //     {
    //         temp = number[1];
    //         number[1] = number[count];
    //         number[count] = temp;
    //     }
    // }
    printf("\n\n");
    count = 0;
    do
    {
        printf("\nnumber %d is %d ", count + 1, number[count]);
        count++;
    } while (count < 6);
    // else if(number[2] > number[0])
    // {
    //     temp=number[0];
    //     number[0]=number[2];
    //     number[2]=temp;
    // }
    // else if(number[3] > number[0])
    // {
    //     temp=number[0];
    //     number[0]=number[3];
    //     number[3]=temp;
    // }
}