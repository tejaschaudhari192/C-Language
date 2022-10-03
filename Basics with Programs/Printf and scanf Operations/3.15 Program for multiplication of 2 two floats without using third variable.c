#include<stdio.h>

int main()
{
    float num1,num2;
    printf("For Multiplication of 2 Numbers");
    printf("\nEnter First Number = ");
    scanf("%f",&num1);
    printf("\nEnter Second Number = ");
    scanf("%f",&num2);
    
    printf("\nMultiplication of %.2f and %.2f = %.2f",num1,num2,num1*num2);
    return 0;
}

