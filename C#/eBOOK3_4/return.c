	#include <stdio.h>
	#include <stdbool.h>
    #include <conio.h>

/*
COMANDOS DE DESVIO
RETURN
*/

	//função com retorno de valor tipo booleano
	bool verificaPar(int numero)
	{
	  if (numero % 2 == 0){
	  return true; //retorna true, indica que o valor é par
	  } else {
	  return false; //retorna false, indica que o valor é
	  }
	}
	int main(void)
	{
	  int numeroEntrada;
      printf("\nDigite um numero: \n");
      scanf("%d", &numeroEntrada);
	  if (verificaPar(numeroEntrada))
	  printf("\n Sim. O numero %d e PAR\n\n", numeroEntrada);
	  else
	  printf("\n Nao. O numero %d e IMPAR\n\n", numeroEntrada);

      getch();
	  return main();
      
	}