#include <stdio.h>
/*
Aluno: Fulano
Prof: Alex
UnilasalleRJ
*/
int main()
{
    int num;
    int i;
    
    // ler um numero positivo
    do
    {
      printf("\nEntre com um numero N:");
      scanf("%d", &num);
    }
    while( num<=0);
    
    //mostrar as linhas numeradas
    for(i=1; i<=num; i++)
    {
       printf("\nEsta eh a linha %d", i);
    }
    
    printf("\n");
    system("pause");
    return 0;
}
    
