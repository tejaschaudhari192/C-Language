#include <stdio.h>
void main()
{
    int a,n,z=1, i=1;

    printf("-----For a^n ----\n");
    printf("Enter a & n\n");
    scanf("%d%d",&a,&n);

    while (i<=n)
    {
        z = z*a;
        i++;
    }
    printf("%d^%d = %d",a,n,z);
}