#include <stdio.h>

float entradaDados (int numeroEntrada)
{
    /*O Objetivo desta função é obter uma entrada de entradaDados.
    Em nosso caso irá obter uma nota de aluno digitada pelo teclado */

    float nota;
    printf("\n Entre com a Nota #%d: ", numeroEntrada);
    scanf("%f", &nota);
    return nota;

}
/* Aqui começa o programa - Função main () -  Todo programa em C começa por aqui */
int main(void)
{
    float n1 , n2 , n3 , n4 , media; //Declara as variáveis para receber as notas

    n1 = entradaDados(1); // chama função para obter a nota #1
    n2 = entradaDados(2); // chama função para obter a nota #2
    n3 = entradaDados(3); // chama função para obter a nota #3
    n4 = entradaDados(4); // chama função para obter a nota #4

    media = (n1+n2+n3+n4)/4;

    if (media >=7.0)
    {
        printf("\n Aluno APROVADO com media: %1.0f \n ", media);
    }
    else {
        printf("\n Aluno REPROVADO com media: %1.0f \n ", media);
    }

    return 0;
}