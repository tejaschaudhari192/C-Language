#include<stdio.h>
float rec(float l,float b);
float cir( float r );
float main()
{
    float l,b,r;
    float area;
    printf("Enter length and breadth = ");
    scanf("%f%f",&l,&b);
    area = rec (l,b);
    printf("area of rectangle is = %.2f Sq.cm",area);
    
    printf("\n\nEnter radius = ");
    scanf("%f",&r);
    area = cir(r);
    printf("\narea of circle is = %.2f Sq.cm",area);
    return 0;
}

float rec(float l,float b)
{
    float area;
    area = l*b;
    return area;

}
    
float cir( float r )
{
    float area;
    area = 3.14*r*r;
    return area;
}