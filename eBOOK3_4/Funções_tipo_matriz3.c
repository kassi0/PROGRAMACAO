#include <stdio.h>
	void imprimeValores(int * valores) //MATRIZ como ponteiro
	{
	  for (int controle = 0; controle < 5; controle++)
	  {
	    printf("\nValor da ocorrencia %d = %d ", controle, valores[controle]);
	  }
	}
	int main(void)
	{
	  printf("\n *Exemplo parametro declarado como PONTEIRO*");
	  printf("\n *----------------------------------------------------*");
	  int valoresOriginais [5] = {511, 411, 311, 211, 111};
	  imprimeValores(valoresOriginais);
	  return 0;
	}

	/*
	TERCEIRA FORMA – DECLARADO COMO UM PONTEIRO
	*/