#include <stdio.h>
int main()
{
    int i;
    int num;
    
    do
    {
        printf("\nNumero positivo:");
        scanf("%d", &num);
    }
    while( num <= 0 );
    
    for(i=1 ; i<=num ; i++)
    {
        printf("#");
    }
    
    printf("\n");
    
    system("pause");
    return 0;
}
