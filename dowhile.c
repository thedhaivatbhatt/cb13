// Write a programe to print table of user given number
// 5 x 1 = 5
// 5 x 10 = 50
#include <stdio.h>
void main()
{
    int number, size, answer,count=1;
    printf("Enter number of table ");
    scanf("%d", &number);
    printf("Enter size of table ");
    scanf("%d", &size);
    do
    {
        answer = number * count;
        printf("%d x %d = %d \n", number,count,answer);
        count++;
    }while(count<=size);
}