#include<stdio.h>
int swap(int,int);

void main()
{
    printf("Enter two numbers : ");
    swap(a,b);
}

void swap(int a,int b)
{
    int a,b,c;
    c=a;
    a=b;
    b=c;
        
    printf("%d\t%d",a,b);
}
