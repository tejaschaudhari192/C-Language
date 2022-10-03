void main()
{
    int rem,n,check[10]={0};
    
    // 0 assigned to array
    
    printf("Enter : ");
    scanf("%d",&n);
    
    while(n>0)
    {
        rem = n%10;
        //break the number
        
        if( check[rem] == 1 )
        {
        
        /*if this condition is true then
          there is no 0*/
                
            break;
                       
        /* loop will break out with
           non-zero remainder value*/
        }
        
        check[rem]=1;
        // 1 means checked
        
        n=n/10;
    }
    
    /*If the loop iterates till n 
    becomes 0 then there is no repetition*/
    
    printf("\nRepetition : ");
    
    if( n > 0)
        printf("yes");
    else
        printf("no");

}