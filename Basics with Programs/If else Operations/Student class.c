#include<stdio.h>

int main()
{
    int num1,num2,num3,add;  float per;
    printf("For check student class");
    printf("\n\n Enter marks of subject 1 = ");
    scanf("%d",&num1);
    printf("\n\n Enter marks of subject 2 = ");
    scanf("%d",&num2);
    printf("\n\n Enter marks of subject 3 = ");
    scanf("%d",&num3);
    
    add = num1 + num2 + num3 ;
    per = add / 3 ;
    
    if( num1 < 0 || num1 > 100 ||
        num2 < 0 || num2 > 100 ||
        num3 < 0 || num3 > 100 )
        
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
    
    return 0;
}

sta