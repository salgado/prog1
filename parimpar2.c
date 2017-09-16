#include <stdio.h>

int main()
{
    int num;
    
    printf("\nEntre com um número:");
    scanf("%d", &num);
    
    if( (num % 2) == 1)
    {
        printf("\nEste numero eh impar\n");
    }
    else
    {
        printf("\nEste numero eh PAR\n");
    } 

 
    system("pause");
    return 0;
}
