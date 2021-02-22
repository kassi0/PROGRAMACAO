#include <stdio.h>
	void imprimeValores(int valores[]) //MATRIZ SEM DIMENSÃO
	{
	  for (int controle = 0; controle < 5; controle++)
	  {
	    printf("\nValor da ocorrencia %d = %d ",controle, valores[controle]);
	  }
	}
	int main(void)
	{
	  printf("\n *Exemplo parametro declarado como MATRIZ sem dimensao*");
	  printf("\n *----------------------------------------------------*");
	  int valoresOriginais [5] = {501, 401, 301, 201, 101};
	  imprimeValores(valoresOriginais);
	  return 0;
	}

	/*
	SEGUNDA FORMA – ESPECIFICADO COMO MATRIZ SEM DIMENSÃO
	*/