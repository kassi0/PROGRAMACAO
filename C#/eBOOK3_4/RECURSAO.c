//Cálculo de fatorial com função recursiva
	#include <stdio.h>
	//Função recursiva que calcula o fatorial
	//de um numero inteiro n
	double fatorial(int entrada)
	{
	  double vfatorial;
	  printf("\n Sequencia de Chamadas recursivas = %d", entrada);
	  if( entrada <= 1 )
	//Caso base: fatorial de n <= 1 retorna 1
	   return (1);
	  else
	  {
	//Chamada recursiva
	    vfatorial = entrada * fatorial(entrada - 1);
	    printf("\nValores Retornados = %2.f", vfatorial );
	    return (vfatorial);
	  }
	}
	int main(void)
	{
	  int numero;
	  double f;
	  printf("Digite o numero que deseja calcular o fatorial: ");
	  scanf("%d", &numero);
	  printf("\n Programa Calculo de fatorial");
	  printf("\n *----------------------------*");
	//chamada da função fatorial
	  f = fatorial(numero);
	  printf("\nFatorial de %d = %.0lf", numero, f);
	  return 0;
	}