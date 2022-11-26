// Write a programe to print following pattern
// 2, 1, 3, 4, 7, 11, 18, 29, 47, 76, 123 .... 3220
#include <stdio.h>
void main()
{
    int first = 2, second = 1,count=0;
    printf("%d ", first);
    printf("%d ", second);
    for (count =0; second<1364 ;count++)
    {
        first = first + second; // 3
        printf("%d ", first);
        second = first + second; // 4
        printf("%d ", second);
    }
    // first=first+second;//7
    // printf("%d ",answer);
    // second=second+first;//11
    // printf("%d ",answer);
    // first=second+first;
    // printf("%d ",answer);
}