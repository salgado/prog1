/*
 Quadrado - Escrever um programa que mostre a seguinte figura no alto da tela.
XXXXX
X   X
X   X
X   X
XXXXX

*/

#include <stdio.h>
int main()
{
    int linhas, i;
    
    linhas = 5;
    
    for(i=1; i<=linhas; i++)
    {
        if ( (i == 1) || (i==linhas) )
        {
           printf("\nXXXXX");
        }
        else
        {
            printf("\nX   X");
        }
        
    }

    printf("\n");
    
    system("pause");
    return 0;
}
