#include <stdio.h>
	int sqr(int entrada)
	{
	  entrada = entrada * entrada;
	  return (entrada);
	}
	int main(void)
	{
	  int t = 4;
	  printf("\n *exemplo de funcao por REFERENCIA*");
	  printf("\n *--------------------------------*");
	  printf("\n %d %d", sqr(t), t);
	  return 0;
	}

	/*CHAMADA POR VALOR E POR REFERÊNCIA*/