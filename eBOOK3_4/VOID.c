#include <stdio.h>

void imprimeValores (int * valores)
{
    for (int controle=0; controle<5; controle++)
    {
        printf("\n Valor da ocorrencia %d = %d", controle , valores[controle]);
    }
    return 0;
}

int main(void) {

    int gay [5] = { 10, 20, 30, 40, 100};
    imprimeValores(gay);


    return 0;
}