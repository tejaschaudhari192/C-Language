#include<stdio.h>
int fact(int n);

void main()
{
    int num,ft;
    printf("Enter number to find factorial : ");
    scanf("%d",&num);

    ft = fact(num);
    printf("\nfactorial is %d",ft);
}

int fact(int n)
{
    int z;
    if (n==0)
        return 1;

     z = fact (n-1);  
    return (z*n);
}