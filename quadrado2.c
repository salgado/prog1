/*

Quadrado 2  - Escrever um programa que mostre a seguinte 
 figura no alto da tela. De acordo com um numero n (de 4 a 100) 
 lido pelo teclado.
XXXXX
X   X
X   X
X   X
XXXXX

*/

#include <stdio.h>
int main()
{
    int linhas, i, j;
    
    printf("\nEntre com o lado do quadrado:");
    scanf("%d", &linhas);
    
    
    for(i=1; i<=linhas; i++)
    {
        for (j=1; j<=linhas;j++)
        {             
            if ( (i == 1) || (i==linhas) )
            {
               printf("X");
            }
            else{
                 if ( (j==1) || (j==linhas) ) //imprime X
                 {
                      printf("X");
                 }
                 else
                 {
                     printf(" ");
                 }
            }
        }
        printf("\n"); //pula linha
    }

    printf("\n");
    
    system("pause");
    return 0;
}
