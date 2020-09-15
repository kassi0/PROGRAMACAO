	#include <stdio.h>
	int main(void)
	{
	  printf("\n Exemplo de estrutura de repetição do-while");
	  printf("\n *--------------------------------------*");
	  int contador= 0;
	  do
	  {
	  contador++;
	  printf("\n O valor do contador é = %d", contador);
	  }
	  while (contador < 10);
	  printf("\n *--------------------------------------*");
	  printf("\n Valor do contador na saida do laço = %d", contador);
	  return 0;
	}