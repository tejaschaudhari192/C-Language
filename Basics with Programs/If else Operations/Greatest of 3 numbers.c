

/* Nested If-Else*/

void main()
{
    int n1,n2,n3;
    printf("For finding greatest among 3 numbers \n enter 2 Numbers \n");
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
}