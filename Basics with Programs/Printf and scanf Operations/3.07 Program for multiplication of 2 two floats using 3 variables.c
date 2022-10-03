#include<stdio.h>
int main()
{
    float num1,num2,ans;
    
    printf("For Multiplication of 2 Numbers");
    printf("\nEnter First Number = ");
    scanf("%f",&num1);
    printf("\nEnter Second Number = ");
    scanf("%f",&num2);
    
    ans = num1 * num2;
    printf("\n\nMultiplication = %.2f",ans);
    
    return 0;
}

