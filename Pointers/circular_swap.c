#include<stdio.h>

void swap(int *,int *,int *);

int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("Enter three digits\n");
    scanf("%d%d%d",&a,&b,&c);
    swap(&a,&b,&c);
    printf("%d\t%d\t%d",a,b,c);
    return 0;
}

void swap(int *a,int *b,int *c)
{
    int *temp;
    *temp=*a;
    *a=*b;
    *b=*c;
    *c=*temp;
}
