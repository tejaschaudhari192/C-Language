#include<stdio.h>
int main()
{
    int num1,num2,ans;
    printf("Program for Addition, Subtraction, Multiplication and Division of 2 Numbers");
    printf("\nFor Addition of 2 Numbers");
    printf("\n\nEnter First Number = ");
    scanf("%d",&num1);
    printf("\nEnter Second Number = ");
    scanf("%d",&num2);
    ans = num1 + num2;
    printf("\nAddition = %d",ans);

    
    printf("\n\nFor Subtraction of 2 Numbers");
    printf("\n\nEnter First Number = ");
    scanf("%d",&num1);
    printf("\nEnter Second Number = ");
    scanf("%d",&num2);
    ans = num1 - num2;
    printf("\nSubtraction = %d",ans);
  
       
      
    printf("\n\nFor Multiplication of 2 Numbers");
    printf("\n\nEnter First Number = ");
    scanf("%d",&num1);
    printf("\nEnter Second Number = ");
    scanf("%d",&num2);
    ans = num1 * num2;
    printf("\nMultiplication = %d",ans);
      
    printf("\n\nFor Division of 2 Numbers");
    printf("\n\nEnter First Number = ");
    scanf("%d",&num1);
    printf("\nEnter Second Number = ");
    scanf("%d",&num2);
    ans = num1 / num2;
    printf("\nDivision = %d",ans);
    
  
}

