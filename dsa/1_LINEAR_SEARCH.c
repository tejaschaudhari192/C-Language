/*Program for Linear Search*/

#include <stdio.h>
// #define size 20

int arr[100], i, n, num, found = 0;
int main()
{
	printf("\n Enter the size of the array : ");
	scanf("%d", &n);

	printf("\n Enter the number of elements in the array : ");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("\n Enter the element to search in the array : ");
	scanf("%d", &num);

	for (i = 0; i < n; i++)
	{
		if (arr[i] == num)
		{
			printf("\n %d element is present at the %d location ", num, i + 1);
			found = 1;
			break;
		}
	}
	if (!found)
	{
		printf("\n Element is not found in the array ");
	}
	return 0;
}

/*Program for Linear Search*/

// #include <stdio.h>

// int main()
// {
// 	int array[100], search, c, n;

// 	printf("Enter the number of elements in array\n");
// 	scanf("%d", &n);

// 	printf("Enter %d integer(s)\n", n);

// 	for (c = 0; c < n; c++)
// 	{
// 		scanf("%d", &array[c]);
// 	}

// 	printf("Enter a number to search\n");
// 	scanf("%d", &search);

// 	for (c = 0; c < n; c++)
// 	{
// 		if (array[c] == search) /* If required element is found */
// 		{
// 			printf("%d is present at location %d.\n", search, c + 1);
// 			break;
// 		}
// 	}

// 	if (c == n)
// 		printf("%d isn't present in the array.\n", search);

// 	return 0;
// }

/* Output
Enter the number of elements in array 10
Enter 10 integer(s)
35 70 20 15 40 80 45 62 78 19
Enter a number to search 62
62 is present at location 8 */
