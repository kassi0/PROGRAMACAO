#include <stdio.h>
	void imprimeValores(int valores[6])
	{
	  for(int controle = 0; controle < 6; controle++)
	  {
	    printf("\n Valor da ocorrencia %d = %d ",controle, valores[controle]);
	  }
	}
	int main(void)
	{
	  printf("\n *Exemplo parametro declarado como MATRIZ*");
	  printf("\n *---------------------------------------*");
	  int valoresOriginais [6] = {50, 40, 30, 20, 10};
	  imprimeValores(valoresOriginais);
	  return 0;
	}