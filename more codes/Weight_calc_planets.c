/*
Weight Calculator for planets*/
#include<stdio.h>
int main(){
    float i,a;
        
    printf("Welcome to Teja's Calculators\n");
    printf("type your weight on earth ");
    scanf("%f",&i);
    a=i/6;
    printf("😏 Your weight on moon is %.2f\n",a);
    a=i/3;
    printf("1 Your weight on mars is %.2f\n",a);
    a=i*1.06;
    printf("2 Your weight on saturn is %.2f\n",a);
    a=i*0.38;
    printf("3 Your weight on Mercury is %.2f\n",a);
    a=i*0.91;
    printf("4 Your weight on venus is %.2f\n",a);

}
/*😁*/