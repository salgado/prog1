#include <stdio.h>

int main()
{
    int i, j;
    int num;
    
    do
    {
        printf("\nNumero positivo:");
        scanf("%d", &num);
    }
    while( num <= 0 );
    
    for(i=1 ; i<=num ; i++)
    {
        for(j=1 ; j <= num; j++)
        {
                printf("#");
        }
        printf("\n");
    }
    
    printf("\n");
    
    system("pause");
    return 0;
}

