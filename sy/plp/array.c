// Date : 13/02/23

#include <stdio.h>
void main()
{
	int a[100],n,i;
	
	printf("\t Array \n");
	printf("Enter length of array : ");
	scanf("%d",&n);
	printf("Enter %d elements\n",n);
	for ( i = 0; i < n; i++)
		scanf("%d",&a[i]);
	
	printf("\nArray Elements : ");
	for ( i = 0; i < n; i++)
		printf(" %d",a[i]);
	

	

// Coded by Tejas
}