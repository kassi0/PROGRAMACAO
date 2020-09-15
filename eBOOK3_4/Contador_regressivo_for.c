/*
 
  * Programa: Contadpr Regressivo em For
  * Data de criação: 11/09/2020
  * Autor: Cássio Telles (kassio@msn.com)
  * Versão: 1.0
  * Última modificação em [11/09/2020] feita por [Cássio Telles]
 
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h> //Biblioteca para SLEEP

int main(void)

{   
    SetConsoleTitle("Contador Regressivo em for"); //Titulo do Programa
    int contador; //Variavel Contador
    printf("\n Digite Tempo Regressivo em segundos: "); //Solicitação de entrada Numerica no teclado
    scanf("%d", &contador); //scaneia a entrada de dados pelo teclado

    for (contador>=0; contador--;) //Funçao configurada para contagem Regressiva
    
    {
        printf("\n\t\tSeu tempo acaba em, %d segundos", contador); 
        Sleep(1000); //String Sleep com váriavel de 1 Segundo
        system("cls");  //String para limpar a tela    
    }

    printf("\n\t\t\tAcabou o Tempo!!!\n");
    system("pause"); //String para dar uma pausa no Prompt 
    return 0;
}
