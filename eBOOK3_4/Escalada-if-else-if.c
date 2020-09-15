#include <stdio.h>

/*ESCALADE IF-ELSE-IF
By Cássio Telles
  e-mail: kassio@msn.com*/

int main(void)
	{
	  int idade;
	  printf("\n Entre com a Idade: ");
	  scanf("%d", &idade);
	  if ((idade >= 0) && (idade < 16))
	    printf("\n E uma Criança");
	      else if ((idade >= 16) && (idade < 22))
	        printf("\n E um Adolescente");
	          else if ((idade >= 22) && (idade < 60))
	            printf("\n E um Adulto");
	              else
	                printf("\ E terceiro Idade");
	//printf("\n Este comando esta fora da cadeia de ifs");
	return 0;
	}