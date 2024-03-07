/* Program to input electricity unit charge and calculate the total electricity bill.

According to the given condition:

 For first 50 units Rs. 0.50/unit [Rs. 25].
 For next 100 units Rs. 0.75/unit [Rs. 75].
 For next 100 units Rs. 1.20/unit [Rs. 120],
 For unit above 250 Rs. 1.50/unit [Rs. 220].

 Finally, add an additional surcharge of 20% into the above-calculated amount to compute the total electricity bill.

*/

#include <stdio.h>
void main(int argc, char const *argv[])
{
    float u,tot,bill;

    printf("Enter units : ");
    scanf("%f", &u);

    if (u <= 50)
        bill = u * 0.5;
    else if ( u<= 150)
        bill = 25 + (u - 50) * 0.75;
    else if (u <= 250)
        bill = 25 + 75 + (u - 50 - 100) * 1.2;
    else
        bill = 25 + 75 + 120 + (u - 50 - 100 - 100) * 1.5;

    tot = bill + bill * 0.2;
    printf("bill : %.2f",tot);
    // return 0;
}
