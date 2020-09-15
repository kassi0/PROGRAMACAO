/*
COMANDOS DE DESVIO
EXIT
*/

	#include <stdio.h>
	#include <stdlib.h>
	#include <stdbool.h>
	//função com retorno de valor tipo booleano
	bool verificaPar(int numero)
	{
	  if (numero % 2 == 0) {
	  return true; //retorna true, indica que o valor é par
	  } else {
	    return false; //retorna true, indica que o valor é
	    }
	  }
	  int main(void)
	  {
	    int numeroEntrada = 3;
	    if (verificaPar(numeroEntrada))
	    {
	      printf("\n OK Era esperado PAR");
	    } else {
	      printf("\n Nao retornou par. Vou cancelar o programa!!!\n");
	      exit(1); //termina o programa neste ponto
	    }
	  return 0;
	}