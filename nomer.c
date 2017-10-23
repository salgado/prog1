#include <stdio.h>      // biblioteca padrao de i/o
#include <string.h>     //biblioteca de manipulacao de strings
/*
Faça um programa para ler um nome e 
escrevê-lo na ordem reversa
*/

int main()
{
    char nome[20];
    int i,j=0, tam, palindromo=1;
    
    printf("\nEntre com um nome:");  
    scanf("%s", nome);
    
    tam = strlen(nome);  //retorna o numero de caracteres da string
    
    printf("\nO nome na ordem reversa:");
    
    for(i=tam-1; i>=0; i--)    //imprime na ordem reversa
    {
       printf("%c", nome[i]);  //imprime caracter a caracter
       if(nome[i] != nome[j])
       {
           palindromo = 0;  //caracter espelhado eh diferente
       }
       j++;
    }
    
    if(palindromo == 1)
    {
        printf("\nEsta palavra eh um palindromo");
    }
    else
    {
        printf("\nEsta palavra NAO EH um palindromo");
    }
    
    printf("\n\n");
    system("pause");
    return 0;
}
