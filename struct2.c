// Example of array of structure
#include <stdio.h>
#include <stdlib.h>
struct time
{
     int hours;
     float minutes_second;
     char name;
};
void main()
{
     struct time country[3];
     int count;
     for(count=0;count<3;count++)
     {
          printf("Enter hours for country  %d ",count+1);
          scanf("%d", &country[count].hours);
          printf("Enter minute for country  %d ",count+1);
          scanf("%f", &country[count].minutes_second);
          fflush(stdin);
          printf("Enter first letter for country %d ",count+1);
          scanf("%c", &country[count].name);
     }
     for(count=0;count<3;count++)
     {
          printf("\nthe time of country %d is hours : %d minutes.seconds : %.2f first letter : %c",count+1,country[count].hours, country[count].minutes_second, country[count].name);
     }
}