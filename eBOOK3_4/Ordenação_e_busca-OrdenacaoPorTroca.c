#include <stdio.h>
	int main(void)
	{
	  int vetor[5] = {76, 63, 46, 14, 02}; //Vetor sem classificação
	  int limite = 5;
	  printf("\n *---------------------------------------*");
	  printf("\n *Vetor original (Antes da classificacao*");
	  printf("\n *---------------------------------------*");
	  for (int w = 0; w < limite; w++)
	  {
	    printf("\n vetor[%d] = %d", w, vetor[w]);
	  }
	// Aqui começa a classificação por TROCA
	  for (int i = 1; i < limite; i++ )
	  {
	    for (int k = limite - 1; k >= i; k--)
	    {
	      if (vetor[k - 1] > vetor[k])
	      {
	        int aux = vetor[k - 1]; //Neste Ponto efetua-se a TROCA
	        vetor[k - 1] = vetor[k]; //Neste Ponto efetua-se a TROCA
	        vetor[k] = aux; //Neste Ponto efetua-se a TROCA
	      }
	    }
	} //Aqui termina a classificação por TROCA
	  printf("\n !!!");
	  printf("\n *-----------------------------*");
	  printf("\n *Vetor Classificado por TROCA* ");
	  printf("\n *-----------------------------*");
	  for (int z = 0; z < limite; z++)
	  {
	    printf("\n vetor[%d] = %d", z, vetor[z]);
	  }
	  return 0;
	}

    /*
    ORDENAÇÃO POR TROCA    
    */