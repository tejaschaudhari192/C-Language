// Date : --/--/23

#include <stdio.h>
int main()
{
	int a = 2, n;
	printf("Enter : ");
	scanf("%d", &n);
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf("%d ", a);
			a += 2;
		}
		printf("\n");
	}

	// Coded by Tejas
}