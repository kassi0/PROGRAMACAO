#include <stdio.h>
#include <conio.h>
#include <windows.h>

/* Codigo de Raiz Quadrada
By: Cássio Telles
*/
int main()
{   
    SetConsoleTitle("Calculadora de Raiz Quadrada");
    int num, quad;
    printf("Digite um valor inteiro: ");
    scanf("%d", &num);
    quad = num * num;
    printf("\nO Quadrado de %d = %d\n\n", num, quad);
    printf("\n\n Pressione qualquer tecla para refazer!\n\n");
    getch();
    return main();
}