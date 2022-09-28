
void main()
{
    int  num1, num2, rem, rev, back;
    printf("To Print The palindrome Numbers in given Range");
    
    printf("\nEnter The Staring Number = ");
    scanf("%d", &num1);
    
    printf("\nEnter The Ending Number = ");
    scanf("%d", &num2);
    
    while(num1<=num2)
    {
        back = num1;
        rem = 0;
        rev = 0;
        
        while(back>0)
	    {
	        
	       rem  = back % 10;
	       back = back / 10;
	       rev  = rev * 10 + rem;
	    }
	    if(rev == num1)
	        printf("\n\t%d is palindrome Number", num1);
	        num1 = num1 + 1;
	        rem = 0;
         rev = 0;
    }

}