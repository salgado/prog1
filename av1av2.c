#include <stdio.h>
/*
5.Agora precisamos calcular 2 notas ao invés de apenas 1 por aluno. 
Como faremos para ler a av1, av2 ?
Ler a av1 e av2 de 5 alunos, e imprimir um relatório com:
    - número do aluno, media e resultado final.
*/
int main()
{
    float notas[5][2]; // coluna 0:av1, coluna 1:av2
    float media;
    int i;
    
    //ler av1 e av2 de 5 alunos
    for(i=0;i<5;i++)
    {
       printf("\nEntre com a av1 do aluno %d:", i+1);
       scanf("%f", &notas[i][0]);
       
       printf("\nEntre com a av2 do aluno %d:", i+1);
       scanf("%f", &notas[i][1]);
    }   
    
    //imprimir relatorio
    //    - número do aluno, media e resultado final.       
    printf("\nRelatorio de av1 e av2");
    printf("\n-----------------------");
    printf("\nAluno\tMedia\tResultado");
    for(i=0;i<5;i++)
    {
       media = (notas[i][0] + notas[i][1] ) / 2;
       printf("\n%d\t%.2f\t", i+1, media);
       if(media>=6)
       {
         printf("Passou");
       }
       else
       {
         printf("AV3");
       }  
    }
    
    printf("\n\n\n");
    system("pause");
    
    return 0;
}
       
