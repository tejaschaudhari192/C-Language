#include<stdio.h>
void stat();
void main()
{
stat();
stat();
stat();
}

void stat()
{
	auto int a=5;
	static int b=10;
	printf("\n auto a = %d",a++);
	printf("\n static b = %d",b++);
}