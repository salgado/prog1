#include <stdio.h>
/*
Fazer um programa em C para imprimir a tabela ASCII.
*/

int main()
{
    int i;
    
    printf("\nDec\tSimbolo");
    for(i=32; i<=255; i++)
    {
        printf("\n%d\t%c", i, i);
    }
    
    system("pause");
    
    return 0;
}
