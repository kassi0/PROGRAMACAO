#include <stdio.h>

/*COMANDO DE SELEÇÃO: IF
  By Cássio Telles
  e-mail: kassio@msn.com*/


int main( )
{
  float nota1, nota2, media;
  printf("\n Informe as duas notas obtidas: ");
  scanf("%f %f", &nota1, &nota2);
  media = (nota1 + nota2) / 2;
  if ( media >= 7.0 ) {
    printf ("\n Sua media foi, %f - APROVADO\n\n", media );
    printf ("\n Parabens \n\n");
  }
  else {
    
    printf ( "\n Sua media foi, %f - REPROVADO\n\n", media );
    printf ("\n Tente Novamente \n\n");


  }
  return 0;
}