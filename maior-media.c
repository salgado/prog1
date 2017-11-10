#include <stdio.h>
/*
4.Faça um programa em C para ler notas de 5 alunos, 
calcular e exibir o percentual de alunos que tiraram 
nota maior que a média da turma.

*/  

int main()
{
    float notas[5], media, soma=0, perc_maior_media;
    int i, cont_maior_media=0;
    
    //ler as 5 notas
    for(i=0;i<5;i++)
    {
        printf("\nEntre com a nota %d:", i+1);
        scanf("%f", &notas[i]);
        soma = soma + notas[i]; //acumula todas as notas
    }
    
    //calcular media da turma
    media = soma /5;
    printf("\nMedia da turma = %.2f", media);
    
    //percorrer o vetor e descobrir cont_maior_media
    for(i=0;i<5;i++)
    {
       if(notas[i]>=media)
         cont_maior_media++;
    }
    
    //mostrar percentual
    perc_maior_media = ((float)cont_maior_media / 5) * 100;
    
    printf("\nPercentual de alunos nota >=media_turma : %.2f \n\n", perc_maior_media);
    
    system("pause");
    return 0;
}
