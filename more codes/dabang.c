// Date 10/10/22

#include<stdio.h>

void main()
{
    int n,i,j;
    printf("Enter Value : ");
    scanf("%d",&n);

    for ( i = 1; i <= n; i++)
    {

        j=1;
        while (j<=n-i+1)
        {
            printf("%d",j);
            j++;
        }

        j=1;
        while (j<i)
        {
            printf("*");
            j++;
        }

        j=1;
        while (j<i)
        {
            printf("*");
            j++;
        }

        j=n-i+1;
        while (j>=1)
        {
            printf("%d",j);
            j--;
        }
        
        printf("\n");
        
    }
    
    

// coded by Tejas
}

