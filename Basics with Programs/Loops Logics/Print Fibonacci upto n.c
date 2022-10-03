void main ()
{
    int a=0,b=1,c=0, n;
    printf("Enter nth value = ");
    scanf("%d",&n);
    
    
    while( c <= n )
    {
        
        printf("\n%d",c);
        a = b;
        b = c;
        
        c = a + b;
    
    
    }

}