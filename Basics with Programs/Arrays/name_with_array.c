#include <stdio.h>
void main()
{
    char a[20];
    int i;

    printf("\t Store name using array \n");
    printf("Enter name : ");

    for ( i = 0; ; i++)
    {
        scanf("%c",&a[i]);

        if (a[i] =='+')
            break;
    }

    for ( i = 0; ; i++)
    {
        if (a[i] =='+')
            break;

        printf("%c",a[i]);
    }

}