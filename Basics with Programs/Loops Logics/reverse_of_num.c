#include <stdio.h>
void main()
{
    int n,r,v=0;
    
    printf("\t Headline \n");
    printf("Enter : ");
    scanf("%d",&n);

    while(n>0)
    {
        r=n%10;
        n=n/10;
        v=v*10+r;
    }
    printf("%d",v);
}