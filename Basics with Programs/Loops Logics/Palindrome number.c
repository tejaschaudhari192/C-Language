void main()
{
    int num,rem,rvs,inp;
    rvs = 0;

    printf("Enter Number : ");
    scanf("%d",&num);
    
    inp = num ;

    while( num > 0 )
    {
        rem = num % 10;
        num = num / 10;
        rvs = rvs*10 + rem;
                                
    }
    
    if( inp == rvs )
        printf("Palindrome");
    else
        printf("Not Palindrome");

}
    