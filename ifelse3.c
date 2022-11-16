// Write a programe to findout which office is smaller out of given 2 offices
#include <stdio.h>
void main()
{
    int height1, breath1, height2, breath2, office1, office2;
    printf("Enter value of height 1");
    scanf("%d", &height1);
    printf("Enter value of breath 1");
    scanf("%d", &breath1);
    printf("Enter value of height 2");
    scanf("%d", &height2);
    printf("Enter value of breath 2");
    scanf("%d", &breath2);

    office1 = height1 * breath1;
    office2 = height2 * breath2;
    // printf("the value office 1 is %d", office1);
    // printf("the value office 2 is %d", office2);

    if(office1 < office2)
    {
        printf("the size of office 1 is smaller ");
    }
    else
    {
        printf("the size of office 2 is smaller ");
    }
    printf("Goodbyee..");
}