void main()
{
    int y;
    
    printf("enter year = ");
    scanf("%d",&y);
    
    if ( y % 4 == 0  && ( y % 400 == 0 || y % 100 != 0 ) )
        printf("It's Leap year");
    else 
        printf("It's not Leap year");
    
}
 

