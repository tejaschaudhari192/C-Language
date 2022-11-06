#include<stdio.h>
void main()
{
    int n,b;
    printf("Enter decimal to get binary : ");
    scanf("%d",&n);
    printf("In Binary : ");
    while(n!=0)
    {
        b=n&1;
        n=n>>1;
        printf("%d",b);
    }
    
}