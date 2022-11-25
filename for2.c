// Write a programe to print following pattern
// 1, 5, 12, 22, 35, 51, 70, 92, 117, 145, 176 ... 3000
// --> 4 7 10 13 16 19
// --> 3  3  3 3
#include <stdio.h>
void main()
{
    int number = 1, temp = 4;
    printf("%d ", number);
    for(number=1 ; number < 2882 ; temp=temp+3)
    {
        number = number + temp;
        printf("%d ", number);
    }
    //     number=number+temp;
    // printf("%d ",number);
    // temp=temp+3;
    // number=number+temp;
    // printf("%d ",number);
    // temp=temp+3;
    // number=number+temp;
    // printf("%d ",number);
}