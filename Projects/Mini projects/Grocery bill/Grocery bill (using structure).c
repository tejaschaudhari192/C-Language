#include<stdio.h>
#include<conio.h>

void main()
{
    struct grocery
    {
        char name[20];
        int no;
        float pr;
    };
    
    struct grocery item[5];
    
    int i,j,n;
    float tot=0;
    
    printf("Enter no of items purchased :");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        printf("\n\nEnter item %d details",i);
        
        printf("\nEnter name : ");
        scanf("%s",&item[i].name);
                
        printf("\nEnter pieces : ");
        scanf("%d",&item[i].no);
                
        printf("\nEnter price : ");
        scanf("%f",&item[i].pr);
   
    }
    
    clrscr(); //clear upper output
    
    printf("\n\n••••••••Your grocery bill••••••••\n\n");
    printf("_________________________________\n"); 
        printf("| sr | name\t| pieces | price");
        printf("\n_________________________________\n"); 

    for(i=1;i<=n;i++)
    {   
        tot = tot + item[i].pr;   
        printf("\n| %d) | %s\t| %d\t | %.2f",i,item[i].name,item[i].no,item[i].pr);                
    }
    
    
    printf("\n_________________________________\n"); 
    printf("\nTotal = ₹ %.2f",tot);
    
    printf("\n\n--------- Visit Again 😇---------");
    
    
}