#include <stdio.h>
void main()
{
    int a[5],b[5],i;
    
    printf("\tFor Addn of two arrays \n");
    
    printf("Enter array a\n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter array b\n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&b[i]);
    }

    printf("Addition of array is\n");
    for ( i = 0; i < 5; i++)
    {
        printf("\n%d",a[i]+b[i]);
    }
}