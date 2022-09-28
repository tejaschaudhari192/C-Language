#include<stdio.h>

int main()
{
    int n1,n2,n3,add;  float per;
    printf("For check student class");
    printf("\n\n Enter marks of subject 1 = ");
    scanf("%d",&n1);
    printf("\n\n Enter marks of subject 2 = ");
    scanf("%d",&n2);
    printf("\n\n Enter marks of subject 3 = ");
    scanf("%d",&n3);
    
    add = n1 + n2 + n3 ;
    per = add / 3 ;
    
    if( n1 < 0 || n1 > 100 ||
        n2 < 0 || n2 > 100 ||
        n3 < 0 || n3 > 100 )
        
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