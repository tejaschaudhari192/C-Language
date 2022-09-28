#include <stdio.h>
void main()
{
    int num1, num2, num3, ans;
    printf("To find greatest of 3 numbers\n");
    printf("Enter Numbers\n");
    scanf("%d%d%d", &num1, &num2, &num3);

    ans = (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);
    printf("\n\t%d is greatest", ans);
    
}