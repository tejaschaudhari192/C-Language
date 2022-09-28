void main()
{
    int i,arr[5];
    
    printf("\n\tEnter any 5 number \n");
    
    for(i=0;i<5;i++)
        scanf("%d",&arr[i]);
        
     
    printf("Even numbers :\n");    
    
    for(i=0;i<5;i++)
        {
        
            if(arr[i]%2==0)
                printf("\t%d",arr[i]);
                                                  
         }
        
    printf("\n\nOdd numbers :\n"); 
        
    for(i=0;i<5;i++)
        {
        
            if(arr[i]%2!=0)
                printf("\t%d",arr[i]);
                                                  
         }
}