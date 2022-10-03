#include <stdio.h>
#include<string.h>

void main()
{
    int a,l_str,vc=0,i,j;
    char str[100],v[100];
    
    printf("\t Headline \n");
    printf("Enter String: ");
    gets(str);
    l_str=strlen(str);
    

    for ( i = 0; i < l_str; i++)
    {
        
        if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            v[vc]=str[i];
            vc++;
            
        }
        
    }

    printf("\nNo of Vowels : %d\nVowels :",vc);
    for ( j = 0; j < vc; j++)
    {
        printf(" %c,",v[j]);
    }

    
    
    
    
}