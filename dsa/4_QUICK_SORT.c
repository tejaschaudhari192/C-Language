// QUICK SORT

#include <stdio.h>
#include <conio.h>
// Function Declaration
void qsort(int[], int, int);
int partition(int[], int, int);

void main()
{
    int a[50], i, n;
    clrscr();

    printf("\n Enter Size of Array:");
    scanf("%d", &n);

    printf("\n Enter Array Elements:\n");

    for (i = 0; i < n; i++)
    {
        printf(" Enter %d Element:", i + 1);
        scanf("%d", &a[i]);
    }

    // Function Call
    qsort(a, 0, n - 1);

    // Print Array
    printf("\n Sorted Array is : ");

    for (i = 0; i < n; i++)
    {
        printf("%d\n\t\t", a[i]);
    }
    getch();
}

// Function Definition
void qsort(int a[], int l, int u)
{
    int j;

    if (l < u)
    {
        j = partition(a, l, u);

        qsort(a, l, j - 1);

        qsort(a, j + 1, u);
    }
}

int partition(int a[], int l, int u)
{
    int v, i, j, temp;

    v = a[l];

    i = l;
    j = u + 1;

    do
    {
        do
        {
            i++;
        } while (a[i] < v && i <= u);

        do
        {
            j--;
        } while (v < a[j]);

        if (i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    } while (i < j);

    a[l] = a[j];
    a[j] = v;

    return (j);
}

// // Program For Quick Sort Another Method
// #include <stdio.h>
// #include <conio.h>

// void qsort(int x[], int low, int high);
// void part(int x[], int low, int high, int *j);
// int high, left, right, j, i;

// void main()
// {
//     int low, n, x[50];
//     clrscr();

//     printf("\n Enter Total no. of Elements=>");
//     scanf("%d", &n);

//     printf("\n Enter Element Before Sorting=>");

//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &x[i]);
//     }

//     low = 0;
//     high = (n - 1);

//     printf("\nAfter Quicksort the Sorted Elements are:\n");

//     qsort(x, low, high);

//     printf("\n");
//     for (i = 0; i < n; i++)
//     {
//         printf("%d\t", x[i]);
//     }

//     getch();
// }

// void qsort(int x[], int low, int high)
// {
//     if (low >= high)
//         return;

//     part(x, low, high, &j);
//     qsort(x, low, j - 1);
//     qsort(x, j + 1, high);
//     return;
// }

// void part(int x[], int low, int high, int *j)
// {
//     int t;
//     int a;
//     a = x[low];
//     right = high;
//     left = low;
//     while (left < right)
//     {
//         while ((x[left] <= a) && (left < right))
//             left = left + 1;

//         while (x[right] > a)
//             right = right - 1;

//         if (left < right)
//         {
//             t = x[left];
//             x[left] = x[right];
//             x[right] = t;
//         }
//     }

//     x[low] = x[right];
//     x[right] = a;
//     *j = right;
//     return;
// }
