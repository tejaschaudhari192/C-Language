#include <stdio.h>
void main()
{
    struct cricket
    {
        char pname[20];
        char cname[20];
        float bavg;
    }p[25];

    int i,n;
    
    printf("How many players ?");
    scanf("%d",&n);

    for ( i = 1; i <= n; i++)
    {
        printf("For player %d",i);
        printf("\nEnter player name, country name , batting averge\n");
        scanf("%s %s %f",&p[i].pname,&p[i].cname,&p[i].bavg);
    }

    for ( i = 1; i <= n-1; i++)
    {
        for (int j = 1; i <= n-i-1 ; j++)
        {
            if(a)
        }
        
    }
    
    
}