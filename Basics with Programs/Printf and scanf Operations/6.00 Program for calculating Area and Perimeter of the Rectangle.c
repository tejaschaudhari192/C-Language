#include<stdio.h>

int main()
{
    int l,b,p;
    printf("For Calculating Area and Perimeter of Rectangle");
    printf("\nEnter the Length = ");
    scanf("%d",&l);
    
    printf("\nEnter the Breadth = ");
    scanf("%d",&b);
    
    printf("\nArea = %d",l*b);
    p = l + b;
    printf("\nPerimeter = %d",2*p);
    return 0;
}

