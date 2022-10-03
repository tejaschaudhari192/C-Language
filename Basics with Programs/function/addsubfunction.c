#include<stdio.h>
int add(int x,int y);
int sub(int p,int q);

void main(){
    int a,b,c,d;
    scanf("%d %d",&a,&b);
    c = add(a,b);
    printf("addition = %d\n\n",c);
    
    scanf("%d %d",&a,&b);
    c= sub(a,b);
    printf("Subtraction = %d",c);
}

int add(int x,int y){
    int z;
    z= x+y;
    return z;
    }
    
int sub(int p,int q){
    int r;
    r=p-q;
    return r;
    }    
    
    
