#include <stdio.h>

int main()
{
	int i;
	float nota, maior, menor;
	maior = 0;
	menor = 10;
	
	for(i=1; i<=5; i++)
	{
		printf("\nEntre com a nota:");
		scanf("%f", &nota);
		
		if(nota>maior)
		{
			maior = nota;
		}
		
		if(nota <menor)
		{
			menor = nota;
		}
	}
	
	printf("\nA maior nota lida = %f", maior);
	printf("\nA menor nota lida = %f", menor);
	
	system("pause");
	return 0;
}
