#include<stdio.h>
int main(){    
    int a;
    printf("Enter the number table you want : ");
    scanf("%d",&a);
    printf("Table of %d\n as follows 😉",a);
    for(int i=1; i<11 ;i++)
    { 
    printf("%d\n",a*i);
    }

}