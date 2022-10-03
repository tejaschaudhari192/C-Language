#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char c[20];
    int l;
    scanf("%s", &c);
    l = strlen(c);
    printf("length = %d", l);
    return 0;
}
