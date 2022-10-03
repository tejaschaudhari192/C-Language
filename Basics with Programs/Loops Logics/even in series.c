#include<stdio.h>
void main()
{
    int a,n;
    
    printf("enter first value even series : ");
    scanf("%d",&a);


    printf("enter last value even series : ");
    scanf("%d",&n);

    while(a<=n)
    {
        printf("%d\n",a);
        a=a+2;
    }
}