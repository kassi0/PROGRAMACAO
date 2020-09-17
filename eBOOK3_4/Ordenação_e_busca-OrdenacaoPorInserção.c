#include <stdio.h>
	int main(void)
	{
	  int vetor[5] = {76, 63, 46, 14, 02};
	  int limite = 5;
	  printf("\n *---------------------------------------*");
	  printf("\n *Vetor original (Antes da classificacao*");
	  printf("\n *---------------------------------------*");
	  int j = 0;
	  int i = 0;
	  for (int w = 0; w < limite; w++)
	  {
	    printf("\n vetor[%d] = %d", w, vetor[w]);
	  }
	//Aqui começa a ordenação por INSERÇÃO
	  for (i = 1; i < limite; i++)
	  {
	    int aux = vetor[i];
	    for (j = i - 1; j >= 0 && aux < vetor[j]; j--)
	      {
	    vetor[j + 1] = vetor[j];
	  	  }
	    vetor[j + 1]= aux;
	  } //fim da ordenação por inserção
	    printf("\n!!!"); //printf("\n!!!"); printf("\n!!!");
	    printf("\n *-------------------------------*");
	    printf("\n *Vetor Classificado por INSERCAO*");
	    printf("\n *-------------------------------*");
	      for (int z = 0; z < limite; z++)
	      {
	      printf("\n vetor[%d] = %d", z, vetor[z]);
	      }
	return 0;
	}