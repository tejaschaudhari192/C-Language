void main()
{
    int s1,s2,s3;
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
}
	