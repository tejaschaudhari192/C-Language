void main()
{
    int sp,ep,i;
    i = 0;
    
    printf("Enter Starting point : ");
    scanf("%d",&sp);
    
    printf("Enter Ending point : ");
    scanf("%d",&ep);
    
    while( sp <= ep )
    {
        if ( sp % 2 == 0 )
            printf("\n%d",sp);
        sp++;               
    }


}