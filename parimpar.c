#include <stdio.h>

int main()
{
    int num;
    int resto, resp;
    
    do
    {
        printf("\nEntre com um número:");
        scanf("%d", &num);
        
        resto = num % 2;
        
        if(resto==1)
        {
            printf("\nEste numero eh impar\n");
        }
        else
        {
            printf("\nEste numero eh PAR\n");
        } 
        
        printf("\nDeseja continuar?(1-Sim/2-Nao)");
        scanf("%d", &resp);
    }while(resp==1);
 
    system("pause");
    return 0;
}
