/* Selection sort ascending order */

#include <stdio.h>

int main()
{
  int array[100], i, j, k, n, smallest, position, temp;

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (i = 0; i < n; i++)
  {
    scanf("%d", &array[i]);
  }

  for (i = 0; i < (n - 1); i++) // It is for n-1 passes
  {
    smallest = array[i];
    position = i;

    for (j = (i + 1); j < n; j++)
    {
      if (array[j] < smallest)
      {
        smallest = array[j];
        position = j;
      }
    }
    printf("\n Smallest = %d position = %d", smallest, position);

    if (smallest == array[i])
    {
      printf("\n");
    }
    else
    {
      temp = array[i];
      array[i] = smallest;
      array[position] = temp;
    }
    printf("\n");
    for (k = 0; k < n; k++)
    {
      printf("\t%d", array[k]);
    }
  }
  printf("\n\n Sorted Elements:");
  for (i = 0; i < n; i++)
  {
    printf("\t%d", array[i]);
  }
  return 0;
}

/* OUTPUT
ENter Number of Elements	5
Enter 5 integers		50 30 40 20 10
Sorted list in ascending order	10 20 30 40 50
*/