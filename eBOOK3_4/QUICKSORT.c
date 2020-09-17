#include <stdio.h>
	int vetor[5] = {76, 63, 46, 14, 02};
	int limite = 5;
	void qs(int * vetor, int left, int right)
	{ //início da função "qs"
	  int i, j;
	  int x, y;
	  i = left; j = right;
	  x = vetor[(left + right) / 2];
	  do
	  {
	    while (vetor[i] < x && i < right) i++;
	    while (x < vetor[j] && j > left) j--;
	    if (i <= j)
	    {
	      y = vetor[i];
	      vetor[i] = vetor[j];
	      vetor[j] = y;
	      i++; j--;
	    }
	  } while (i <= j);
	  if (left < j) qs(vetor,left,j);
	  if (i < right) qs(vetor, i, right);
	  } //FIM da função "qs"
	//----------------------------------------------
	  void quick(int * vetor, int count)
	  { //Início da função "quick"
	    printf("\n *---------------------------------------*");
	    printf("\n *Vetor original (Antes da classificação*");
	    printf("\n *---------------------------------------*");
	    for (int z = 0; z <= limite; z++)
	    {
	      printf("\n vetor[%d] = %d", z, vetor[z]);
	    }
	  qs(vetor, 0, count - 1); //chama a função "qs"
	}//FIM da função "quick"
	//----------------------------------------------
	//início do programa (main)
	//----------------------------------------------
	int main(void)
	{
	  quick(vetor, 5); //Chama a função que inicia a ordenação (quick)
	  printf("\n!!!"); //printf("\n!!!"); printf("\n!!!");
	  printf("\n*-------------------------------*");
	  printf("\n* Vetor Classificado QUICKSORT*");
	  printf("\n*-------------------------------*");
	    for (int z = 0; z < limite; z++)
	    {
	      printf("\n vetor[%d] = %d", z, vetor[z]);
	    }
	  return 0;
	}