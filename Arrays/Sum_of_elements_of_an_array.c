#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[100],i,n,sum=0;

    printf("Enter number of elements to add : ");
    scanf("%d",&n);

    for ( i = 0; i < n; i++)
    {
        printf("Enter %dth Element : ",i+1);
        scanf("%d",&a[i]);
    }

    for ( i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }

    printf("Sum of %d elements is %d",n,sum);
    
    return 0;
}
