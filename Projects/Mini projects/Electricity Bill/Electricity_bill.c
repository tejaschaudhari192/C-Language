#include<stdio.h>
void main()
{
    int u;
    float bill,tot;

    printf("To calculate your total electricity bill\n");

    printf("Enter Units = ");
    scanf("%d",&u);

    if( u < 0 )
        printf("Invalid unit");
    else
    {
        if( u <= 50)
            {
                bill = u*0.5;
                tot = bill + bill*0.2;                
            }
        else
        {
            if ( u <= 150 )
                {
                    bill = 25 + ( u - 50 )*0.75;
                    tot = bill + bill*0.2;              
                }
            else
            {
                if ( u <= 250 )
                    {
                        bill = 75 + 25 + ( u - 150 )*1.20;
                        tot = bill + bill*0.2;         
                    }
                else
                {
                    bill = 120 + 75 + 25 + ( u - 250 )*1.50;
                    tot = bill + bill*0.2;          
                }
            }
        }
        printf("your total bill is ₹ %.2f",tot);
    }   
}