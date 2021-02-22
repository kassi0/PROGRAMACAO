#include <stdio.h>
#include <string.h>

/*
COMPARAÇÃO ENTRE DUAS STRINGS
Como a string não é um tipo de dados básico da linguagem C, operações simples, como atribuição e comparação, 
não podem ser feitas diretamente com os operadores disponíveis. 
A comparação entre duas strings pode ser feita de duas formas: 
1-) Percorrendo os vetores e comparar seus caracteres correspondentes, um a um ou 2-) utilizar a função strncmp().

O código abaixo faz a comparação entre duas strings str1 e str2. Para isso, utilizamos a função strncmp() – observe a linha 10. 
Note que a estrutura do comando: strcmp(s1, s2,tamanho), onde o campo "tamanho" é a quantidade caracteres comparados. 
Em nosso caso, foram comparados os 8 caracteres.
*/
    int main(void) {

      char *str1 = "banana2";
	  char *str2 = "banana1";
	  int ret;
	  printf("\n Manipulacao de String : Comparacao entre 2 strings");
	  printf("\n *---------------------------------------------------------------------------------*");
	  ret = strncmp(str1, str2, 6); //Compara as 8 posições das duas strings, a Mudança é a questão do Char da 7ª posição que é 1 e 2. se colocar em 6 sempre vão dar iguais
	  if (ret > 0)
	  {
	    printf("\n str1 e maior");
	  }
	  else if(ret < 0)
	  {
	    printf("\nstr2 e maior");
	  }
	  else
	  {
	    printf("\nAs duas palavras sao iguais");
	  }


        return 0;
    }