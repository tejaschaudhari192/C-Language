void main()
{
char x ;
    printf("\nEnter Character = ");
    scanf("%c",&x);
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
}




