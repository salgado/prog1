#include <stdio.h>

int main()
{
    int x = 100;
    int y = 10;
    
    printf("Boa noite pessoal!!\n\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    
    printf("x+y = %d\n", x + y);
    printf("x-y = %d\n", x - y);
    printf("x*y = %d\n", x * y);
    printf("x/y = %.50f\n", (float)x / y);
    
    if(x>y)
    {
        printf("x eh MAIOR que y\n");
    }
    else if(x<y)
    {
        printf("x eh MENOR que y\n");
    }
    else
    {
        printf("x eh IGUAL a y\n");
    }
    
    
    
    system("pause");
    
}
