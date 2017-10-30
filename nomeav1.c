/*
 Faça um programa em C para ler nome, av1 e av2 de 5 alunos.
 Emitir um relatório de nome e resultado ("aprovado" ou "vai para av3").

*/
#include <stdio.h>

int main()
{
    char nome[5][20];  // nome de 5 alunos com no maximo 20 letras
    float nota[5][2];  // nota de 5 alunos (av1 e av2)
    int i;
    float media;
    
    for(i=0; i<5; i++)
    {
        printf("\nEntre com o nome do aluno %d:", i+1);
        scanf("%s", nome[i]);
        
        printf("\nEntre com a Av1 do aluno %d:", i+1);
        scanf("%f", &nota[i][0]);
        
        printf("\nEntre com a Av2 do aluno %d:", i+1);
        scanf("%f", &nota[i][1]);
    }   
    
    printf("\n\nRestultado final");    
    for(i=0; i<5; i++)
    {
        media = (nota[i][0] + nota[i][1] )/2 ; //calcula media
        if(media>=6)
        {
           printf("\n%s\t aprovado", nome[i]);
        }
        else
        {
           printf("\n%s\t vai para AV3", nome[i]);
        }
    }
           
    system("pause");
    return 0;
}    
    
