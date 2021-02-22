#include <stdio.h>
int main() 
{

    //vetor para receber as notas digitadas
	  float amostraTemperaturaTrimestral[3][4] =
	  { {25.4, 27.09, 28.90, 29.50},
	  {21.8, 20.05, 22.90, 20.90},
	  {18.8, 20.10, 17.70, 19.00} };
	  printf("\n Exemplo de acesso a Matriz Bidimensional");
	  printf("\n *------------------------------------------*");
	  for (int indice_linha= 0; indice_linha < 3; indice_linha++)
	  {
	 //laço repetição para controlar as 3 LINHAS da matriz
	    printf("\n *--------Temperaturas do Mes : %d ------*", indice_linha + 1);
	    for (int indice_coluna= 0; indice_coluna < 4; indice_coluna++)
	    {
	     //laço repetição para controlar as 4 COLUNAS da matriz
	      printf("\n Temperatura %d = %.2f", indice_coluna+ 1, amostraTemperaturaTrimestral[indice_linha][indice_coluna]);
	    }
	  }
return 0;
}


/*
INICIALIZAÇÃO DE MATRIZ

*/