#include<stdio.h>
int fact (int);

void main()
{
    int n,f;
    printf("enter number to find factorial :");
    scanf("%d",&n);
    
    
    printf("Factorial of %d is %d",n,f);
    
}

int fact(int x)
{
    int f=1;
    while ( x>=1)
    
        f=f*x--;
        
    return (f);
}