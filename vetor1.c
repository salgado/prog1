#include <stdio.h>

int main()
{
	float av1[5];
	float media=0, soma=0, perc_media=0;
	
	int i, maior_que_media=0, media_lasalle=0;
	
	//ler 5 notas
	for(i=0; i<5;i++)
	{
		printf("\nEntre com a av1 do aluno %d:", i+1);
		scanf("%f", &av1[i]);
		soma = soma + av1[i]; //acumula as notas
	}
	
	media = soma / 5;
	
	printf("\nMedia da turma =%.2f", media);
	
	//percorre o vetor de notas preenchido
	for(i=0;i<5;i++)
	{
		if(av1[i]>= media)
		{
			maior_que_media++;
			printf("\nO Aluno %d tirou nota >= media", i+1);	
		}
		
		if(av1[i]>= 6)
		{
			media_lasalle++;
		}
	}
	
	perc_media = (media_lasalle * 100) / 5;
	
	printf("\nNumero de alunos que tiraram nota >= media : %d\n\n", maior_que_media);
	printf("\nPercentual de alunos >= media lasalle = %.2f%% \n", perc_media);
	
	system("pause");
	return 0;
}
