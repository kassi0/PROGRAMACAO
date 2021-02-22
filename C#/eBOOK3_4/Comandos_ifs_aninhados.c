#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/*COMANDO IF’S ANINHADOS
By Cássio Telles
  e-mail: kassio@msn.com*/

int main(void)
{
    bool cond1, cond21;
	  cond1 = true; //vamos supor que cond1 seja VERDADEIRO
	  cond21 = true; //vamos supor que cond1 seja FALSO
	  if (cond1) // condição COND-1
	  {
	    if (cond21) // condição COND-2-1
	    {
	      printf("Valor de cond1 = %d (BLOCO-2-2) \n", cond1); //BLOCO-2-2
	      printf("Valor de cond21 = %d (BLOCO-2-2) \n", cond21); //BLOCO-2-2
	    }
	    else // falso da Condição COND-2-1
	    {
	      printf("Valor de cond1 = %d (BLOCO-2-1) \n", cond1); //BLOCO-2-1
	      printf("Valor de cond21 = %d (BLOCO-2-1) \n", cond21); //BLOCO-2-1
	    }
	  } // PONTO DE ENCONTRO P2-1
      else // falso da Condição COND-1
       {
	    printf("Valor de cond1 = %d (BLOCO-1) \n", cond1); // BLOCO-1
	   } // PONTO DE ENCONTRO P1-0
	  printf("Valor de cond1 = %d (BLOCO-3) \n", cond1); // BLOCO-3;
	  printf("Valor de cond1 = %d (BLOCO-3) \n", cond21); //BLOCO-3
	  
    return 0;
}