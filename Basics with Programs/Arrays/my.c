#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, j, t, a[5];

    for (i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < 4; i++)
        for (j = 0; j < (4 - i); j++)
        {
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }

    for (i = 0; i < 5; i++)
    {
        printf("\n%d", a[i]);
    }

    return 0;
}
