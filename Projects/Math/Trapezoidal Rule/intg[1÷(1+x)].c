//program for y = intg[1/(1+x)]


float intg(float);

void main ()
{
    float i,f,h,x,r,n,z,c;
    
    printf("Enter i :");
    scanf("%f",&i);
    printf("Enter f :");
    scanf("%f",&f);
    printf("Enter n :");
    scanf("%f",&n);
    
    h = (f-i)/n;
    printf("\nstep size(h) = %f",h);
    
    
    
    x = intg(i) + intg(f);
    
    printf("\nx0 = %f\n\ty0 = %f",i,intg(i));
            
    c=1; //loop counter 
    
    while(i <= (f-(2*h)))
    {
        i = i + h;
        
                       
        printf("\nx%.0f = %f",c,i);
        
        r = r + intg(i);
        printf("\n\ty%.0f = %f",c,intg(i));
        
        c++   ;
        
    }
    
    printf("\nx%.0f = %f\n\ty%.0f = %f",c,i,c,intg(f));

    
    printf("\n\nX = %f",x);
    printf("\nR = %f",r);
    
    
    z= (h/2)*(x+2*r);
    
    printf("\n\nSolution:\n\ty = %f",z);    

}

float intg(float x)
{
    float z;
    z = 1/(1+x);
    
    return z;

}