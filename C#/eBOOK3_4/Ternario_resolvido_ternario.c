#include <stdio.h>
#include <stdio.h>

/*ESTRUTURA RESOLVIDA COM TENÁRIo ?
By Cássio Telles
  e-mail: kassio@msn.com*/

	int main(void)
	{
	  int valor, valor2;
	  printf("Informe um numero: ");
	  scanf("%d", &valor);
	  valor2 = (valor < 0) ? 0 : valor; //RESOLVIDO EM UMA ÚNICA LINHA
	  printf("\n Resolvido com Operador ternário ?");
	  printf("\n -----------------------------------------------");
	  printf("\nO valor de valor2 é: %d \n\n ", valor2);
	  return 0;
	}