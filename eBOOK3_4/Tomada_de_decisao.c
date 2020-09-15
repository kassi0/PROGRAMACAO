#include <stdio.h>
#include "conio.h"

/*TOMADA DE DECISÃO*/
/*COMANDO DE SELEÇÃO: IF
By Cássio Telles
  e-mail: kassio@msn.com*/


int main(/*int argc, char const *argv[]*/)
{
    /* code */
    float nota1, nota2, media;
    printf("\n Informe as duas notas obtidas: ");
    scanf("%f %f" , &nota1, &nota2);
    media = (nota1+nota2)/2;
    if (media >= 7.0) printf("\n Aprovado");
    else printf("\n Reprovado");

    //printf("Sua Media e %f", media);

    getch();


    return 0;
}
