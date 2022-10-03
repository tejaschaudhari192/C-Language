#include<stdio.h>
#include<conio.h>
int main()
{
    int ch;  
    char s;
    float num1,num2,ans,per;
    int a,b,c,n1,n2,n3,add,i,s1,s2,s3,y,n,flag,fact,rem,rev,num,bkp,sum,rvs;
    char x;
    
    clrscr();

    do
    {
    	clrscr();
    	
    	printf("\t~~~~~~ main menu ~~~~~~");
        printf("\n\t1. Print different messages");
        printf("\n\t2. Arithmetic operations");
        printf("\n\t3. If else programs");
        printf("\n\t4. Program using loop");
        printf("\n\t5. Exit");
        
        printf("\n\n\tEnter Choice :");
        scanf("%d",&ch);
        
        clrscr();

        switch(ch)
        {
        case 1:
        do
        {
                clrscr();
                
                printf("~~messages program~~");
                printf("\n\n\t1. Personal info");
                printf("\n\t2. Markshit");
                printf("\n\t3. Timetable");
                printf("\n\t4. Exit");
                
                printf("\n\n\tEnter Choice : ");
                scanf("%d",&ch);
                
                clrscr();
        
                switch ( ch )
                {
                case 1:
                        printf("_______________Personal Information_______________");
                        printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
                        printf("\nName   : Tejas Vijay Chaudhari ");
                        printf("\nAge    : 18   ");
                        printf("\nStd    : CSE - Data Science FY B.Tech");
                        printf("\nPhone  : 8329828126");
                        printf("\nEmail  : jaybalaji192@gmail.com");
                        printf("\nAddress: Near Balaji temple, khalche gao, Shirpur (425-405)");
                        printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
                        
                        break;
                	
                case 2: printf(":::::::::::::::::::::::::::HSC Marksheet:::::::::::::::::::::::::::\n");
                	    printf("\nName : CHAUDHARI TEJAS VIJAY");
                	    printf("\nSeat Number : S0353");
                	    printf("\nDivision : NASIK\n");
                	    printf("_________________________________________________________");
                	    printf("\n|\tSubject \t| Max Mark\t|Marks Obtained |  ");
                	    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
                	    printf("\n|\t01. ENGLISH    |\t100\t|\t082\t|");
                	    printf("\n|\t40. MATHS      |\t100\t|\t088\t|");
                	    printf("\n|\t54. PHYSICS    |\t100\t|\t089\t|");
                	    printf("\n|\t55. CHEMISTRY  |\t100\t|\t087\t|");
                	    printf("\n|\t56. BIOLOGY    |\t100\t|\t088\t|");
                	    printf("\n|\t97. I.T.(SCI)  |\t100\t|\t088\t|");
                	    printf("\n_________________________________________________________\n");
                	    printf("\nTotal Marks : 522/600          Percentage : 87% ");
                	    printf("\nResult : pass");
                	    
                	    break;
                	    
                case 3:
                        printf("\t\tR.C Patel Marathi medium Secondary school, Shirpur\n");
                        printf("************************************Timetable********************************************\n");
                        printf("_________________________________________________________________________________________\n");
                        printf("  Mon\t|\tTue\t|\tWed\t|\tThu\t|\tFri\t|\tSat\t|\n");
                        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                        printf("  MII\t|\tM I\t|\tSci\t|\tEng\t|\tMar\t|\tMar\t|\n");
                        printf("  Eng\t|\tEng\t|\tMar\t|\tGeo\t|\tMar\t|\tEng\t|\n");
                        printf("------------------------------------b-r-e-a-k--------------------------------------------\n");
                        printf("  Geo\t|\tGeo\t|\tEng\t|\tEng\t|\tEng\t|\tSci\t|\n");
                        printf("  Sci\t|\tSci\t|\tM I\t|\tEng\t|\tSci\t|\tSci\t|\n");
                        printf("  Eng\t|\tM I\t|\tMar\t|\tMar\t|\tMII\t|\t - \t|\n");
                        printf("_________________________________________________________________________________________");
                        
                        break;
                        
                 case 4: 
                        exit(0);
                        break;
                        
                 default :
                        printf("\nInvalid Input");
                        break;       
	
                	    
                }
                  printf("\n\tDo you want to enter previous menu (y/n)...");
                  scanf(" %c",&s);
        } while ( s == 'y' || s == 'Y');

                break;

        case 2:
        do{
        	
            clrscr();
            
        	printf("\t@ Welcome to arithmetic operations @");
            printf("\n\t1. Addition of two integers");
        	printf("\n\t2. Addition of two floats");
        	printf("\n\t3. Subtraction of two integers");
        	printf("\n\t4. Subtraction of two floats");
        	printf("\n\t5. Multiplication of two integers");
        	printf("\n\t6. Division of two integers");
        	printf("\n\t7. All in one");
        	printf("\n\t10. exit ");
        	
        	printf("\nEnter choice :");
            scanf("%d",&ch);
            
            clrscr();
            
        	switch ( ch )
            {
                case 1 : 
                        printf("\nFor Addition of 2 Numbers");
                        printf("\n\nEnter First Number = ");
                        scanf("%f",&num1);
                        printf("\nEnter Second Number = ");
                        scanf("%f",&num2);
                        
                        printf("\nAddition of %.0f and %.0f = %.0f",num1,num2,num1+num2);
                case 2 :
                        printf("\nFor Addition of 2 Numbers");
                        printf("\nEnter First Number = ");
                        scanf("%f",&num1);
                        printf("\nEnter Second Number = ");
                        scanf("%f",&num2);
                        printf("\nAddition of %.2f and %.2f = %.2f",num1,num2,num1+num2);
   
    
                        break;
                case 3: 
                        printf("\nFor Subtraction of 2 Numbers");
                        printf("\nEnter First Number = ");
                        scanf("%f",&num1);
                        printf("\nEnter Second Number = ");
                        scanf("%f",&num2);
                        printf("\nSubtraction of %.0f and %.0f = %.0f",num1,num2,num1-num2);
   
                        break;
                case 4:
                        printf("\nFor Subtraction of 2 Numbers");
                        printf("\nEnter First Number = ");
                        scanf("%f",&num1);
                        printf("\nEnter Second Number = ");
                        scanf("%f",&num2);
                        printf("\nSubtraction of %.2f and %.2f = %.2f",num1,num2,num1-num2);
                        
            
                        break;
            
                case 5: 
                        printf("\nFor Multiplication of 2 Numbers");
                        printf("\nEnter First Number = ");
                        scanf("%f",&num1);
                        printf("\nEnter Second Number = ");
                        scanf("%f",&num2);
                        printf("\nMultiplication of %.2f and %.2f = %.2f",num1,num2,num1*num2);
    
                        break;
            
                case 6: 
                        printf("\nFor Division of 2 Numbers");
                        printf("\nEnter First Number = ");
                        scanf("%d",&num1);
                        printf("\nEnter Second Number = ");
                        scanf("%d",&num2);
                        printf("\nDivision of %d and %d = %d",num1,num2,num1/num2);
    
                        break;
            
                case 7:
                        printf("\nProgram for Addition, Subtraction, Multiplication and Division of 2 Numbers");
                        printf("\nFor Addition of 2 Numbers");
                        printf("\n\nEnter First Number = ");
                        scanf("%f",&num1);
                        printf("\nEnter Second Number = ");
                        scanf("%f",&num2);
                        ans = num1 + num2;
                        printf("\nAddition = %.2f",ans);

                        printf("\n\nFor Subtraction of 2 Numbers");
                        printf("\n\nEnter First Number = ");
                        scanf("%f",&num1);
                        printf("\nEnter Second Number = ");
                        scanf("%f",&num2);
                        ans = num1 - num2;
                        printf("\nSubtraction = %.2f",ans);
  
                        printf("\n\nFor Multiplication of 2 Numbers");
                        printf("\n\nEnter First Number = ");
                        scanf("%f",&num1);
                        printf("\nEnter Second Number = ");
                        scanf("%f",&num2);
                        ans = num1 * num2;
                        printf("\nMultiplication = %.2f",ans);
      
                        printf("\n\nFor Division of 2 Numbers");
                        printf("\n\nEnter First Number = ");
                        scanf("%f",&num1);
                        printf("\nEnter Second Number = ");
                        scanf("%f",&num2);
                        ans = num1 / num2;
                        printf("\nDivision = %.2f",ans);
                        
                        break;
                        
                case 10: 
                        exit(0);
                        break;
        

                default :
                        printf("\nInvalid Input");
                        break;
            }
              printf("\n\nDo you want to enter previous menu again (y/n)...");
              scanf(" %c",&s);
            } while ( s =='y'|| s =='Y');
            
            break;
            
        	
        
        
        case 3:
        do
        {
                clrscr();
                printf("\t=== if else programs ===");
                printf("\n\n\t1. Greatest of 2 Numbers");
                printf("\n\t2. Greatest of 3 numbers");
                printf("\n\t3. Check whether given number odd or even");
                printf("\n\t4. Check student class");
                printf("\n\t5. Check type of a triangle");
                printf("\n\t6. Identify type of character");
                printf("\n\t7. Check vowel, consonant or non - alphabet");
                printf("\n\t8. To check leap year");
                
                printf("\nEnter choice :");
                scanf("%d",&ch);
                
                clrscr();
                
                switch ( ch)
                {
                case 1:
                    printf("\nFor finding greatest among 2 numbers \n enter 2 Numbers \n");
                    scanf("%d%d",&n1,&n2);
                    if( n1 == n2 )
                        printf("\n\tBoth are same");
                    else
                        if( n1  > n2 )
                            printf("\n\t %d is greater",n1);
                        else
                            printf("\n\t %d is greater",n2);
                            
                break;
                
                case 2:
                    printf("\nFor finding greatest among 3 numbers \n enter 3 Numbers \n");
                    scanf("%d %d %d",&n1,&n2,&n3);
                    if( n1==n2 && n1==n3 )
                        printf("\n\t All are same");
                    else {
                    	if( n1 > n2 && n1 > n3 )
                    	    printf("%d is greatest");
                    else {
                    	if( n2 > n3)
                    	    printf("%d is greatest",n2);
                    	else
                    	    printf("%d is greatest",n3);          
                         }
                        }
                 break;    
                 
                 case 3 :
                     printf("\nEnter number to check odd/even = ");
                     scanf("%d",&i);
                     if( i%2 == 0)
                     	printf("number is even");
                     else 
                     	printf("number is odd");
                 break;
                 
                    
                 case 4:  
                     printf("For check student class");
                     printf("\n\n Enter marks of subject 1 = ");
                     scanf("%d",&n1);
                     printf("\n\n Enter marks of subject 2 = ");
                     scanf("%d",&n2);
                     printf("\n\n Enter marks of subject 3 = ");
                     scanf("%d",&n3);
                     
                     add = n1 + n2 + n3 ;
                     per = add / 3 ;
                     
                     if( n1 < 0 || n1 > 100 || n2 < 0 || n2 > 100 || n3 < 0 || n3 > 100 )
                         printf("\n\n\tInvalid marks");
                     else
                         {
                         	printf("\n\tTotal Marks = %d\n\tpercentage obtained = %.2f\n\n\t",add,per);
                         if( per >= 70)
                             printf("Distinction");
                         else
                             {
                             	if( per >= 60)
                             	    printf("First class");
                             	else
                                 {
                                 	if( per >= 50)
                                 	    printf("Second class");
                                 	else
                                 	{
                                 		if( per >= 40)
                                 		    printf("Pass class");
                                 		else
                                 		    printf("You Failed");
                                     }
                                 }
                            }            
                         }
                 break;
                 
                 case 7:
                     printf("To check Type of a triangle");
                     printf("\n Enter side 1 = ");
                     scanf("%d",&s1);
                     
                     printf("\n Enter side 2 = ");
                     scanf("%d",&s2);
                     
                     printf("\n Enter side 3 = ");
                     scanf("%d",&s3);
                     
                     if ( s1 < 1 || s2 < 1 || s3 < 1 )
                         printf("\n\tEnter valid sides");
                     else
                         {
                         	if ( s1 + s2 <= s3 && s1 + s3 <= s2 && s2 + s3 <= s1 )
                         	    printf("\n\tEnter valid sides");
                         	else
                                 {
                                 	if ( s1 == s2 && s2 == s3 )
                                 	    printf("\n\tTriangle is Equilateral");
                                 	else
                                         {
                                         	if ( s1 == s2 || s2 == s3 || s1 == s3 )
                                         	    printf("\n\tTriangle is isosceles");
                                             else
                                                 {
                                                 	if ( s1*s1 + s2*s2 == s3*s3 || s1*s1 + s3*s3 == s2*s2 || s3*s3 + s2*s2 == s1*s1 )
                                                 	    printf("\n\tTriangle is Right Angled");
                                                 	else
                                                 	    printf("\n\tTriangle is Scalene");
                                                 	}
                                                 	}
                                                 	}
                                                 	}
                     
                 break;
                 
                 case 8:
                     printf("\nEnter Character = ");
                     scanf(" %c",&x);
                     printf("\n\n\t");
                     if ( x >= 'A' && x <= 'Z')
                         printf("It's Capital letter");
                     else
                         {
                         	if ( x >= 'a' && x <= 'z')
                         	    printf("It's small letter");
                         	else
                                 {
                                 	if ( x >= '0' && x <= '9')
                                 	    printf("It's number");
                                 	else
                                 	    printf("It's special character");
                                 	}
                                 	}
                 
                 break;
                 case 10 :
                     printf("enter year = ");
                     scanf("%d",&y);
                     if ( y % 4 == 0  && ( y % 400 == 0 || y % 100 != 0 ) )
                         printf("It's Leap year");
                     else
                         printf("It's not Leap year");
                         
                 break; 
                 
                 default :
                    printf("\nInvalid Input");
                    break;
                 }   
                                
                
          printf("\n\tDo you want to enter previous menu (y/n)...");
          scanf(" %c",&s);
        } while ( s == 'y' || s == 'Y');
        
        break;
        
        case 4:
        do
        {
                clrscr();
                printf("\t×××××××××loop programs×××××××××");
                printf("\n\n\t1. Multiplication of given number");
                printf("\n\t2. Print even numbers from 1 to n");
                printf("\n\t3. Print Fibonacci series till nth term");
                printf("\n\t4. Check given number is prime or not");
                printf("\n\t5. Factorial of given number");
                printf("\n\t6. Reverse of given number");
                printf("\n\t7. Check Palindrome number");
                printf("\n\t8. Check Angstrom number");
                printf("\n\t9. Palindrome in given range");
                printf("\n\t10. Angstrom in given range");
                
                printf("\n\nEnter choice :");
                scanf("%d",&ch);
                
                clrscr();
                
                switch (ch)
                {
                	case 1:
                	    printf("\nEnter the number table you want\n");
                	    scanf("%d",&a);
                	    printf("Table of %d\n as follows ðŸ˜‰",a);
                	    for( i=1; i<=10 ; i++)
                	    {
                	    	printf("\n%d\n",a*i);
                	    }
                	
                	break;
                	
                	case 2:
                	    printf("\nEnter number = ");
                	    scanf("%d",&n);
                	    
                	    while ( i <= n )
                	    {
                	    	if ( i%2 == 0 )
                	        	printf("%d\n",i);
                	    	
                	    	i++;
                	    }  	
                	    
                	break;
                    
                    case 3:
                        a=0; b=1; c=0;
                        printf("Enter nth = ");
                        scanf("%d",&n);
                        
                        for ( i=1 ; i <= n ; i++ )
                        {
                        	c = a + b;
                        	printf("\t%d",a);
                        	a = b;
                        	b = c;
                        }	
                        
                    break;    
                    
                    case 4:
                        flag = 0;
                        printf("\nEnter Number : ");
                        scanf("%d",&n);
                        
                        for ( i = 2 ; i < n/2 ; i++ )
                        {
                        	if( n%i == 0)
                        	    flag = 1;
                        	
                        	i++;
                        }
                        printf("\n\t it's ");
                        if( flag == 0)
                            printf("prime");
                        else
                            printf("composite");
                    
                    break;
                    
                    case 5:
                        fact = 1;
                        printf("\nEnter number :");
                        scanf("%d",&n);
    
                        for( i=1 ; i <= n ; i++ )
                        {
                        	fact = fact*i;
                        }
                        	printf("%d",fact);
                        	
                    break;
                    
                    case 6:
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
                            
                    break;
                    case 7:
                            rvs = 0;
                            printf("Enter Number : ");
                            scanf("%d",&num);
                            
                            bkp = num ;
                            
                            while( num > 0 )
                            {
                            	rem = num % 10;
                            	num = num / 10;
                            	rvs = rvs*10 + rem;
                            }
                            
                            if( bkp == rvs )
                                printf("Palindrome");
                            else
                                printf("Not Palindrome");
                            
                    break; 
                    
                    case 8:
                        printf("Enter Number : ");
                        scanf("%d",&num);
                        
                        bkp = num ;
                        while( num > 0 )
                        {
                        	rem = num % 10;
                        	num = num / 10;
                        	sum = sum + rem*rem*rem;
                        }
                        printf("\n\t");
                        
                        if( bkp == sum )
                            printf("Armstrong");
                        else
                            printf("Not Armstrong");
                    
                    break;
                    case 9:
                        printf("\n\n\tTo Print The palindrome Numbers in given Range");
                        printf("\n\n\tEnter The Staring Number = ");
                        scanf("%d", &num1);
                        printf("\n\n\tEnter The Ending Number = ");
                        scanf("%d", &num2);
                        while(num1<=num2)
                        {
                        	bkp = num1;
                        	rem = 0;
                        	rev = 0;
                        	while(bkp>0)
                        	{
                        		rem  = bkp % 10;
                        		bkp = bkp / 10;
                        		rev  = rev * 10 + rem;
                        	}
                        	if(rev == num1)
                        	    printf("\n\n\t%d is palindrome Number", num1);
                        	    num1 = num1 + 1;
                        	    rem = 0;
                        	    rev = 0;
                        }
	
                    break;
                    
                    case 10:
                        printf("\n\n\tTo Print The Armstrong Numbers in given Range");
                        printf("\n\n\tEnter The Staring Number = ");
                        scanf("%d", &num1);
                        printf("\n\n\tEnter The Ending Number = ");
                        scanf("%d", &num2);
                        while(num1<=num2)
                        {
                        	bkp = num1;
                        	rem = 0;
                        	rev = 0;
                        	while(bkp>0)
                        	{
                        		rem  = bkp % 10;
                        		bkp = bkp / 10;
                        		rev  = rev + rem*rem*rem;
                        	}
                        	if(rev == num1)
                        	    printf("\t%d", num1);
                        	    num1 = num1 + 1;
                        	    rem = 0;
                        	    rev = 0;
                        }
                        
                    break;
                    
                    case 11 : exit (0);
                    
                	default :
                        printf("\nInvalid Input");
                    break;
                }
                	
                
                
          printf("\n\tDo you want to enter previous menu (y/n)...");
          scanf(" %c",&s);
        } while ( s == 'y' || s == 'Y');
        
        break;
        
        case 5:
               exit (0);
                       
        default :
                printf("\nInvalid Input");
                break;    
        }
        
        printf("\n\tDo you want to enter main menu (y/n)...");
        scanf(" %c",&s);
    } while ( s == 'y' || s == 'Y');
    
    
 return 0;   
}