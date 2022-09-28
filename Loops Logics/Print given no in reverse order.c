void main()
{
    int num,rem,rvs;
    
    rvs = 0;

    printf("Enter Number : ");
    scanf("%d",&num);

    while( num > 0 )
    {
        rem = num % 10;
        num = num / 10;
        rvs = rvs*10 + rem;
                                
    }

    printf("%d",rvs);
    
   
}