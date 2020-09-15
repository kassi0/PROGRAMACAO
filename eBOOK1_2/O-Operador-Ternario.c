#include <stdio.h>
#include <conio.h>

/*
O OPERADOR TERNÁRIO
*/

int main (void) {

int cod = 101;
int resultado = cod > 100 ? 200 : 300;
printf("Valor de resultado %d\n",resultado);
//getch();
return 0;
}

/*int main (void) {
    int numero;
    printf("Digite seu numero da sorte: ");
    scanf("%d",&numero);

    numero == 3 ? printf("Parabens, Voce Ganhou!\n") : printf("Tente novamente!\n");

    //printf("Valor de resultado %d \n",numero);

    getch();

    return 0;

}*/