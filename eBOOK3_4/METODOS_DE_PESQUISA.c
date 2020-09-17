	#include <stdio.h>
	#include <stdbool.h>
	int vetor[5] = {02, 14, 46, 63, 76};
	int limite = 5;
	bool buscaBinaria(int * vetor, int limitex, int chave)
	{
	  int low, high, mid;
	  low = 0; high = limitex - 1;
	  while(low <= high)
	  { //Início do laço de repetição
	    mid = (low + high) / 2;
	    if (chave < vetor[mid]) high = mid - 1;
	    else if(chave > vetor[mid]) low = mid + 1;
	    else return true;
	    } //fim do laço de repetição
	  return false;
	  }
	//----------------------------------------------
	//início do programa (main)
	//----------------------------------------------
	int main(void)
	{
	  int elemento;
	  printf("\nInforme o numero ");
	  scanf("%d", &elemento);
	  if (buscaBinaria(vetor, limite,elemento))
	  {
	    printf("\nO elemento %d foi encontrado no vetor",elemento);
	  } else {
	  printf("\nO elemento %d NAO foi encontrado no vetor", elemento);
	  }
	return 0;
	}