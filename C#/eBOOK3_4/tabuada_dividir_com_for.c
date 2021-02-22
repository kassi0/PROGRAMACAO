#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

/*Tabuada em for
By Cássio Telles
  e-mail: kassio@msn.com*/

int entradaDados()
	{
	  int numeroEntrada;
	  printf("\n Informe o numero base para tabuada: ");
	  scanf("%d", &numeroEntrada);
	  return numeroEntrada; //Retorna o valor digitado pelo usuario
	}
	//---------------------------------------------------------------------------
int main(void)
	{
		SetConsoleTitle("Tabuada de Dividir em For");
	  int numeroDigitado = entradaDados();
	  if( numeroDigitado < 1 || numeroDigitado > 10)
	  {
     printf("\n Numero Informado e invalido (Fora do Intervalo 1-10)");
	    exit(0); // termina o programa;
	  }
	  printf("\n *-------------------------------------*");
	  printf("\n Voce selecionou a tabuada do %d", numeroDigitado);
	  printf("\n *-------------------------------------*\n");
	  for(int controle = 1 ;controle <= 10; controle++)
	  {
	    printf("\n %d : %d = %d", numeroDigitado * controle, numeroDigitado, controle);
        Sleep(1000);
		
	  }
	  printf("\n\n novamente....");
	  printf("\nAperte Enter para Nova Tabuada ou Alt+C para Sair\n\n");

	  getch();

	  return main();
	}