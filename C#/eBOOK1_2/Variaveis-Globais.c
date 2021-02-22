#include <stdio.h>

/*
VARIÁVEIS GLOBAIS
*/

int contador;

void contabilidade1()
{
    scanf("%i",&contador);
    contador = contador + 10;
    printf("Neste momento #1 a variavel contador = %i\n",contador);
    
}
void contabilidade2()
{
    scanf("%i",&contador);
    contador = contador + 20;
    printf("Neste momento #2 a variavel contador = %i\n",contador);
    
}

int main(void){
    scanf("%i",&contador);
    printf("Neste momento #0 a variavel contador = %i\n",contador);
    
    //
    contabilidade1();
    //
    contabilidade2();

    scanf("%i",&contador);
    contador = contador + 30;
    printf("Neste momento #3 a variavel contador = %i\n",contador);
    

    return 0;
}