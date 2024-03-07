// Date : 13/02/23

#include <stdio.h>
void main()
{
	int a, b, c;

	printf("\tArithmatic operations\n");
	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);
	printf("\n1.Addition");
	printf("\n2.Subtraction");
	printf("\n3.Multiplication");
	printf("\n4.Division");
	printf("\n5.Modulo");
	printf("Enter Choice : ");
	scanf("%d", &c);

	switch (c)
	{
	case 1:
		printf("\n%d + %d = %d", a, b, a + b);
		break;
	case 2:
		printf("\n%d - %d = %d", a, b, a - b);
		break;
	case 3:
		printf("\n%d * %d = %d", a, b, a * b);
		break;
	case 4:
		printf("\n%d / %d = %d", a, b, a / b);
		break;
	case 5:
		printf("\n%d % %d = %d", a, b, a % b);
		break;

	default:
		printf("Invalid");
		break;
	}

	// Coded by Tejas
}