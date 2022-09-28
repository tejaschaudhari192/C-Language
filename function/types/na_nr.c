#include<stdio.h>
void swap();

void main()
{
    printf("Enter two numbers : ");
    swap();
}

void swap()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;

    printf("%d\t%d",a,b);
}
