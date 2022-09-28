void main()
{
    int a = 0, b = 1,c = 0;
    int i = 1, n = 0;
    
    printf("Enter nth = ");
    scanf("%d",&n);
    
    while( i <= n)
    {
        c = a + b;
        printf("\t%d",a);
        a = b;
        b = c;
        i++;
    }
}