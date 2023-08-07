/* Insertion sort ascending order */

#include <stdio.h>

int main()
{
  int n, array[100], i, k, temp, j;
  // clrscr();

  printf("\n Enter number of elements : ");
  scanf("%d", &n);

  printf("\n Enter %d integers : ", n);

  for (i = 0; i < n; i++)
  {
    scanf("%d", &array[i]);
  }

  for (i = 1; i <= n - 1; i++)
  {
    temp = array[i];
    j = i - 1;

    while (temp < array[j] && j >= 0)
    {
      array[j + 1] = array[j];
      j = j - 1;
    }
    array[j + 1] = temp;
  }

  printf("\n Sorted list in ascending order :");

  for (i = 0; i <= n - 1; i++)
  {
    printf("\n%d", array[i]);
  }
  return 0;
}

/*
OUTPUT
ENter Number of Elements	5
Enter 5 integers		50 30 40 20 10
Sorted list in ascending order	10 20 30 40 50
*/