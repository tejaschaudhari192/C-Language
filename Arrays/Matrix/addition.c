#include<stdio.h>
void main()
{
    int a[3][3],b[3][3],z[3][3],i,j;
    
    printf("For Matrix 1\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("Enter element %d%d  : ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }

    printf("\n\nFor Matrix 2\n");   
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("Enter element %d%d  : ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            z[i][j]=a[i][j]+b[i][j];
        }        
    }

    printf("\nAddition of Matrix is\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d ",z[i][j]);
        }
        printf("\n");
    }

}