#include <stdio.h>

int main()
{
    int x = 0;
    int y = 0;
    
    printf("\nEntre com o valor de x:");
    scanf("%d", &x);
    
    printf("\nEntre com o valor de y:");
    scanf("%d", &y);
    
    printf("Boa noite pessoal!!!\n\n");
    printf("x = %d\n", x);
    printf("y = %d\n\n", y);
    
    printf("x+y = %d\n", x + y);
    printf("x-y = %d\n", x - y);
    printf("x*y = %d\n", x * y);
    printf("x/y = %.50f\n", (float)x / y);
    
    if(x>y)
    {
        printf("o valor de x eh MAIOR do que o valor de y\n");
    }
    else if(x<y)
    {
        printf("o valor de x eh MENOR do que o valor de y\n");
    }
    else
    {
        printf("o valor de x eh IGUAL ao valor de y\n");
    }
    
    system("pause");
    
}
