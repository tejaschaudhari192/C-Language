void main()
{
	char s1[15],s2[15];
	clrscr();

	printf("enter string ");
	gets(s1);
	strcpy(s2,s1);
	strrev(s2);

	if (strcmp(s1,s2))
		printf("not");
	else
		printf("yes");

	getch();
}
