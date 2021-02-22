#include <stdio.h>


/*
COMANDOS DE DESVIO
BREAK
Data 11/09/2020
*/


	int main(void)
	{
	  for(int contador= 1; contador <= 100; contador++)
	  {
	    printf("\n Valor de contador = %d", contador);
	    if (contador == 10)
	      break;
	    }
	  return 0;
	}