void main()
{
    int num,rem,sum,inp;
    

    printf("Enter Number : ");
    scanf("%d",&num);
    
    inp = num ;

    while( num > 0 )
    {
        rem = num % 10;
        num = num / 10;
        sum = sum + rem*rem*rem;
                                
    }
    
    printf("\n");
    
    if( inp == sum )
        printf("Armstrong");
    else
        printf("Not Armstrong");

}