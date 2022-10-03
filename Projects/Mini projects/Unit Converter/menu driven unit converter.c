Program:

#include<stdio.h>
#include<conio.h>
void main()
{
    
    char opt; //variable for choose required conversion
    int sub;  // for choose conversion ootion
    float inp,out;  // input and output variable of conversion
    
    do
    {
    printf("*************  Unit Converter  **************\n");
    printf("\n\tt for temperature conversion");
    printf("\n\tm for mass conversion");
    printf("\n\tc for currency conversion");
    printf("\n\tl for Length conversion");
    printf("\n\nEnter = ");
    scanf(" %c",&opt);

    clrscr(); //it will clear upper statements form output window

    switch( opt )
    {
        case 't':
            printf("You choose temperature conversion\n");
            printf("\n\t1 for Celcius to Fahrenheit");
            printf("\n\t2 for Fahrenheit to Celcius\n");
            
            printf("\n\nEnter = ");
            scanf("%d",&sub);
            
            switch ( sub )
            {
            case 1:               
                    printf("Enter °C = ");
                    scanf("%f",&inp);
                    out = ( inp*1.8 ) + 32;
                    printf("\nIn Fahrenheit = %.2f",out);
            
                    break;
                
            case 2:                
                    printf("Enter °F = ");
                    scanf("%f",&inp);
                    out = inp - 32;
                    printf("\nIn Celcius = %.2f",out/1.8);
                    
                    break;
            
             default:
                    printf("Invalid Input...");    
                    break;
            }
            
            break;
            
        case 'm':
        
            printf("You choose mass conversion");
            printf("\n\n\t1 for kgs to pounds");
            printf("\n\t2 for kgs to ounce");
            printf("\n\nEnter = ");
            scanf("%d",&sub);

            switch( sub )
            {
            case 1:                 
                    printf("Enter Kgs = ");
                    scanf("%f",&inp);
                    out = inp*2.205;
                    printf("In pounds %.2f",out);
                    
                    break;

            case 2:
                    printf("Enter Kgs = ");
                    scanf("%f",&inp);
                    out = inp*35.274;
                    printf("In ounce %.2f",out);
                    
                    break;
            
            default:
                    printf("Invalid Input...");                       break;
                    break;
            
            
            }
            
            break;    
                        
        case 'c':
        
            printf("You choose currency conversion");
            printf("\n\n\t1 for Rs to USD");
            printf("\n\t2 for Rs to EUR");
            printf("\n\t3 for Rs to YEN");
            
            printf("\n\nEnter = ");
            scanf("%d",&sub);
            
            switch ( sub )
            {
            case 1 :                
                    printf("\nEnter Rs = ");
                    scanf("%f",&inp);
                    out = inp*0.013;
                    printf("In USD = %.2f",out);
                    
                    break;
            
            case 2 :                
                    printf("\nEnter Rs = ");
                    scanf("%f",&inp);
                    out = inp*0.012;
                    printf("In EUR = %.2f",out);
            
                    break;
            
            case 3 :               
                    printf("\nEnter Rs = ");
                    scanf("%f",&inp);
                    out = inp*1.68;
                    printf("In YEN = %.2f",out); 
                    break;
            
            default: 
                    printf("Invalid Input..."); 
                    break;           
            }
            
            break;
            
        case 'l':        
            printf("You choose Length conversion");
            printf("\n\n\t1 for metre to foot");
            printf("\n\t2 for metre to inch");
            printf("\n\t3 for metre to Yard");
            
            printf("\n\nEnter = ");
            scanf("%d",&sub);

            switch( sub )
            {
            case 1 :
                
                    printf("\nEnter metre = ");
                    scanf("%f",&inp);
                    out = inp*3.28;
                    printf("In foot = %.2f",out);
                    
                    break;

            case 2 :              
                    printf("\nEnter metre = ");
                    scanf("%f",&inp);
                    out = inp*39.37;
                    printf("In inch = %.2f",out);
                    
                    break;

            case 3 :
                
                    printf("\nEnter metre = ");
                    scanf("%f",&inp);
                    out = inp*1.0936;
                    printf("In Yard = %.2f",out);
                    
                    break;
            
            default :
                    printf("Invalid Input...");    
            break;
            
            }
            
        break;        

        default :
            printf("Choose valid option....");

        break;
    
        }
        printf("\n\n\nDo you want to go main menu?(y/n)....");
        scanf(" %c",&opt);
        
    clrscr();
            
    }
    while(opt == 'y');

}