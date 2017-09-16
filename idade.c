#include <stdio.h>

int main()
{
    int idade;
    
    printf("\nEntre com a sua idade:");
    scanf("%d", &idade);
    
    if(idade>=18 && idade<=70)
    {
        printf("\nVoce pode dirigir");
    }
    else
    {
        printf("\nVoce eh MENOR de idade");
    }
    
    system("pause");
}
