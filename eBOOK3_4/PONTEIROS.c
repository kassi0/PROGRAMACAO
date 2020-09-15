	#include <stdio.h>
	int main(void)
	{
      int valor1, valor2;
      printf("\nDigite valor 1 para soma: \n");
      scanf("%d", &valor1);
      printf("\nDigite valor 2 para soma: \n");
      scanf("%d", &valor2);
	  int soma = valor1 + valor2;
	  int * somaParcial = &soma;
	  printf("\nTeste de utilizacao de uso de Ponteiros");
	  printf("\n*---------------------------------------*");
	  printf("\n Valor da variavel 'soma'= %i", soma);
	  printf("\n valor da variavel *SomaParcial = %i", * somaParcial);
	  return 0;
	}