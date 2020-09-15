#include <stdio.h>

/*UM EXEMPLO SIMPLES DO COMANDO WHILE*/
int main(void)
{
	int contador = 0;

	printf("\nExemplo de estrutura de repeticao while");
      
	printf("\n*----------------------------------------*");

	while (contador < 10)
    {
      contador++;
	  printf("\n O valor do contador e = %d", contador);
	}
return 0;
}