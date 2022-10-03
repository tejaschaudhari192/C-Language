#include <stdio.h>
void main()
{
    int a[10],i;
    
    printf("\tEnter 10 numbers\n");

    for ( i = 0; i <10 ; i++)
    {
        printf("Enter %dth element : ",i+1);
        scanf("%d",&a[i]);
    }

    printf("\tEntered numbers\n");
    for ( i = 0; i <10 ; i++)
    {
        printf("\n%dth element : %d",i+1,a[i]);
    }
}