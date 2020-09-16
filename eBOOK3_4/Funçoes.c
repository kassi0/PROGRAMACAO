#include <stdio.h>
	int sqr(int entrada)
	{
	  entrada = entrada * entrada;
	  return (entrada);
	}
	int main(void)
	{
	  int t = 4;
	  printf("\n *exemplo de função por REFERÊNCIA*");
	  printf("\n *--------------------------------*");
	  printf("\n %d %d", sqr(t), t);
	  return 0;
	}