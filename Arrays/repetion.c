#include <stdio.h>

    

void main()
{
    int rem,n,check[10]={0};
    
    printf("Enter : ");
    scanf("%d",&n);

    while(n>0)
    {
        rem = n%10;

        if( check[rem] == 1 )
            break;                     
              
        check[rem]=1;

        n=n/10;
    }  

    printf("\nRepetition : ");  
    if( n > 0)
        printf("yes");
    else
        printf("no");
}
