#include <stdio.h>

int main()
{
    char nome[3][90];
    int i;
    
    for(i=0;i<3;i++)
      gets(nome[i]);
    
    for(i=0;i<3;i++)
      {
       printf("\n%s", nome[i]);
      }
    
    getch();
    
    return 0;
}
    
    
