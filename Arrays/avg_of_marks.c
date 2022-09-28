#include <stdio.h>
void main()
{
     int avg, sum = 0, i;
     int marks[30];
     /* array declaration */
     for (i = 0; i < 5; i++)
     {
          printf("\tEnter marks");
          printf("\nSubject %d : ",i+1);
          scanf("%d", &marks[i]);
          /* store data in array */
     }

     for (i = 0; i < 5; i++)
          sum = sum + marks[i];
     /* read data from an array*/
     avg = sum / 5;
     printf("\nAverage marks = %d", avg);
}