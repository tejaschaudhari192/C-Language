#include <stdio.h>
#include <conio.h>

void insertionsort();
void selectionsort();

void main()
{

  int choice;

  do
  {
    printf("\n\t\tProgram for Insertion and Selection Sort \n");
    printf("\n\tMain Menu: \n1.Insertion Sort\n2.Selection Sort\n3.Exit");
    printf("\nSelect menu : ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      insertionsort();
      break;
    case 2:
      selectionsort();
      break;
    case 3:
      printf("\nExiting the program");
      break;

    default:
      printf("Invalid menu item selected.");
    }
  } while (choice != 3);
}

void insertionsort()
{
  int n, array[100], i, k, temp, ptr;
  // clrscr();

  printf("Enter number of elements for Insertion Sort\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (i = 0; i < n; i++)
  {
    scanf("%d", &array[i]);
  }

  for (i = 1; i <= n - 1; i++)
  {

    temp = array[i];
    ptr = i - 1;

    while (temp < array[ptr] && ptr >= 0)
    {
      array[ptr + 1] = array[ptr];
      ptr = ptr - 1;
    }
    array[ptr + 1] = temp;
  }

  printf("Sorted list in ascending order by insertion sort:\n");

  for (i = 0; i <= n - 1; i++)
  {
    printf("%d\n", array[i]);
  }
  return 0;
  // getch();
}

void selectionsort()
{
  int array[100], i, j, k, n, smallest, position, temp;
  // clrscr();

  printf("Enter number of elements for selection sort\n");
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
    getch();

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
  printf("\n\n Sorted Elements by selection sort:");
  for (i = 0; i < n; i++)
  {
    printf("\t%d", array[i]);
  }

  return 0;
  // getch();
}