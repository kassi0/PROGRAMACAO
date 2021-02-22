#include <stdio.h>
#include <stdio.h>


/*ESTRUTURA RESOLVIDA COM IF
By Cássio Telles
  e-mail: kassio@msn.com*/


	int main(void)
	{
	  int valor, valor2;
	  printf("Informe um VALOR numérico: ");
	  scanf("%d", &valor);
	  if(valor < 0)
	    valor2 = 0;
	  else
	    valor2 = valor;
	    printf("\n Resolvido com estrutura de if ");
	    printf("\n -----------------------------------------------");
	    printf("\nO valor de valor2 é: %d \n\n", valor2);
	  return 0;
	}