#include <stdio.h>

int main()
{
	int diagonal1A=1;
   	int diagonal2A=1;
	int matA[3][3];
	int matB[3][3];
	int matC[3][3];
	int i, j;
	
	//ler todos os elementos da matriz
	printf("\nLer a matriz A\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nEntre com o elemento %d-%d : ", i, j);
			scanf("%d", &matA[i][j]);
		}
	}
	
	//ler todos os elementos da matriz
	printf("\nLer a matriz B\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nEntre com o elemento %d-%d : ", i, j);
			scanf("%d", &matB[i][j]);
		}
	}
	
	//exibir matriz lida
	printf("\nA matriz lida eh:\n");
	for(i=0;i<3;i++)
	{
		printf("| ");
		for(j=0;j<3;j++)
		{
			printf("%d ", matA[i][j]);
		}
		printf("|\n"); // pula de linha
	}
	
	//exibir os valores da diagonal principal
	printf("\nA diagonal principal eh:\n");
	for(i=0;i<3;i++)
	{
		printf("%d ", matA[i][i]);
		diagonal1A*=matA[i][i];
	}
	
	printf("\n\n");
	
	//exibir os valores da diagonal secundaria
	printf("\nA diagonal secundaria eh:\n");
	j=2;
	for(i=0;i<3;i++)
	{
		printf("%d ", matA[i][j]);
		diagonal2A*=matA[i][j];
		j--;
	}
	//exibir a determinante da matriz A
	printf("\nA determinante da Matriz A = %d\n", diagonal1A-diagonal2A);
	
	//calcular a soma da matriz A e B
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			matC[i][j] = matA[i][j] + matB[i][j];
		}
	}
	
	//exibir matriz C = A + B
	printf("\nA matriz calculada C:\n");
	for(i=0;i<3;i++)
	{
		printf("| ");
		for(j=0;j<3;j++)
		{
			printf("%d ", matC[i][j]);
		}
		printf("|\n"); // pula de linha
	}
	
	system("pause");
	return 0;
	
}
