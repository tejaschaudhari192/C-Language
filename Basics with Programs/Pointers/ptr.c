#include <stdio.h>
void main()
{
    int *ptr=0, n=0,**pptr=0;

    printf("\n\tProgram to Demonstrate pointers\n");
    n=32; //sample value
    ptr=&n; // store address in ptr
    
    printf("\nValue in ptr is %d -- Address of varable n",ptr);
    printf("\nValue in *ptr is %d -- Value at Address of varable n",*ptr);
    //*ptr shows value whose address is store
    
    (*ptr)++; //pointer increament
    printf("\n\nValue in *ptr++ is %d -- ",*ptr);

    // pointer to pointer
    pptr=&ptr;
    printf("\n\nValue in pptr is %d -- Address of variable ptr++",pptr);
    printf("\nValue in **pptr %d -- Value at Address of ptr",**pptr);
    /* pptr points to ptr and ptr points to n
            pptr --> ptr --> n
    */
    printf("\n\nNew value of n is %d",n);

//coded by tejas
}