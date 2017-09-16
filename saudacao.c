#include <stdio.h>

int main()
{
    int hora;
    
    printf("\nEntre com a hora:");
    scanf("%d", &hora);
    
    if(hora>=0 && hora<12)
    {
       printf("\nBom dia\n");
    }
    else if(hora>=12 && hora<18)
    {
       printf("\nBoa tarde\n");
    }
    else if(hora>=18 && hora<24)
    {
       printf("\nBoa noite\n");
    }
    
    system("pause");
}
