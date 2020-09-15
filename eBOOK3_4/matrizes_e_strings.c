#include <stdio.h>

/*
EXEMPLOS DE MANIPULAÇÃO DE VETORES UNIDIMENSIONAIS 1
*/

int main(void) {

    //double amostraTemperatura [100];
    float notas[4] = {4.5, 5.0, 4.0, 6.0};
    float soma = 0;
    for(int indice; indice < 4; indice++)
    //Laço de repetição para acessar as 4 posições do vetor
    {
        soma = soma + notas[indice];

    }

    printf("\n A media das notas e: %.2f", (soma / 4) );


    return 0;
}