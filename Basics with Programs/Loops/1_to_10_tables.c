#include<stdio.h>
//print table 1 to 10 using nested for loop
void main()
{
    for ( int i = 1; i <= 10 ; i++)
    {
        for (int j = 1; j <= 10 ; j++)
        {
            printf("%d x %d = %d\n",j,i,j*i);
        }
        printf("\n"); 
    }
}