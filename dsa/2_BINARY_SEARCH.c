/* Program to Perform Binary Search*/

#include <stdio.h>
#define size 100
int main()
{
	int first, last, mid, arr[100], i, key, found = 0, n;

	printf("Enter the size of the array : ");
	scanf("%d", &n);

	printf("Enter %d elements of array : ", n);

	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	printf("\nEnter key = ");
	scanf("%d", &key);

	first = 0;
	last = n - 1;

	while (first <= last)
	{
		mid = (first + last) / 2;

		if (key == arr[mid])
		{
			found = 1;
			break;
		}

		if (key < arr[mid])
			last = mid - 1;

		if (key > arr[mid])
			first = mid + 1;
	}

	if (found == 1)
		printf("\n Element %d is Found at %d position", key, mid + 1);
	else
		printf("\n Element %d Not Found in array", key);

	return 0;
}

/*Output
Enter 10 elements of array
13 25 37 42 54 67 71 83 91 97
Enter key= 91
Element 91 is Found at 8 position */













