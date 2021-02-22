#include <stdio.h>
	
	int main(void)
	{
	  int vetor[5] = {76, 63, 46, 14, 02};
	  int limite = 5;
	  int exchange = 0;
	  printf("\n *---------------------------------------*");
	  printf("\n Vetor original (Antes da classificacao*");
	  printf("\n *---------------------------------------*");
	  for ( int w = 0; w < limite; w++)
	  {
	    printf("\n vetor[%d] = %d", w, vetor[w]);
	  }
	  for (int i = 0; i < limite - 1; i++) //Aqui começa a classificação
	  {
	     exchange = 0;
	    int c = i;
	    int aux = vetor[i];
	      for (int j = i + 1;j < limite;j ++)
	      {
	        if (vetor[j] < aux)
	        {
	          c = j;
	          aux = vetor[j];
	          exchange = 1;
	     }
	  }
	  if (exchange)
	  {
	    vetor[c] = vetor[i];
	    vetor[i] = aux;
	  }
	}
	printf("\n!!!"); //printf("\n!!!"); printf("\n!!!");
	printf("\n*-------------------------------*");
	printf("\n* Vetor Classificado por SELEÇÃO*");
	printf("\n*-------------------------------*");
	  for(int z = 0; z < limite; z++)
	  {
	    printf("\n vetor[%d] = %d", z, vetor[z]);
	  }
	return 0;
	}
/*
ORDENAÇÃO POR SELEÇÃO
*/