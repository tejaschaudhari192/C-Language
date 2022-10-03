#include<stdio.h>
int main()
{
	int a,b,n;
	// clrscr();
	scanf("%d",&n);

	printf("\n\nPattern :\n");

	for( b= 1; b<=n ; b++)
	{
	for( a=1; a<=b ;a++ )
	{
		printf("a");
	}
	printf("\n");
	}


	// getch();
}