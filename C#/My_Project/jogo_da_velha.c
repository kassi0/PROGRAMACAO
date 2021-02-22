/*Jogo da Velha em C
    Versão: 1.0
    Autor: kassi0 (Cássio Telles) kassio@msn.com
    Data da ultima Atualização : 14/09/2020*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define RED   "\x1B[31m"
#define GRN   "\x1B[32m"
#define YEL   "\x1B[33m"
#define BLU   "\x1B[34m"
#define MAG   "\x1B[35m"
#define CYN   "\x1B[36m"
#define WHT   "\x1B[37m"
#define RESET "\x1B[0m"


void tabuleiro (char casas2[9]){
    system("cls");
    printf("\n");
    printf("\t\t%c | %c | %c \n", casas2[6],casas2[7],casas2[8]);
    printf("\t\t---------- \n");
    printf("\t\t%c | %c | %c \n", casas2[3],casas2[4],casas2[5]);
    printf("\t\t---------- \n");
    printf("\t\t%c | %c | %c \n", casas2[0],casas2[1],casas2[2]);
    /*printf ("\t %c | %c | %c \n",casas2 [0],casas2 [1],casas2[2]);
    printf ("\t-----------\n");
    printf ("\t %c | %c | %c \n",casas2 [3],casas2 [4],casas2[5]);
    printf ("\t-----------\n");
    printf ("\t %c | %c | %c \n",casas2 [6],casas2 [7],casas2[8]);*/
}

int main()
{
    system("MODE con cols=38 lines=14 ");
    SetConsoleTitle("####Jogo da Veia!####");
    char casas[9] = {'1', '2','3','4','5','6','7','8','9'};
    char res;
    int cont_jogadas, jogada = 1, vez = 0, i;
    int j1 = 0, j2 = 0, emp = 0;
    do{
            cont_jogadas=1;
            for (i=0; i<=8; i++){
                casas[i] = ' ';
            }
        do{
            tabuleiro(casas);
            if(jogada ==0){
                printf(RED "\n Jogada Invalida, tente novamente!\n" RESET);
            }
            printf(BLU "Digite a casa para Marcar [1..9] \n" RESET);
            if(vez%2==0){
                printf(CYN "Jogar X\n " RESET);
            }else{ 
                printf(MAG "Jogador O\n" RESET );
            }
            scanf("%i", &jogada);
            if (jogada < 1 || jogada > 9){
                jogada = 0;
            }
            else if (casas[jogada-1] != ' '){
                jogada = 0;
            }else{
                if(vez %2==0) {
                    casas[jogada-1] = 'X';

                }else{
                    casas[jogada-1] = 'O';
                }
                cont_jogadas++;
                vez++;
            }

            if (casas[0]=='X' && casas[1]=='X' && casas[2]=='X') { cont_jogadas=11;}
            if (casas[3]=='X' && casas[4]=='X' && casas[5]=='X') { cont_jogadas=11;}
            if (casas[6]=='X' && casas[7]=='X' && casas[8]=='X') { cont_jogadas=11;}
            if (casas[0]=='X' && casas[3]=='X' && casas[6]=='X') { cont_jogadas=11;}            
            if (casas[1]=='X' && casas[4]=='X' && casas[7]=='X') { cont_jogadas=11;}            
            if (casas[2]=='X' && casas[5]=='X' && casas[8]=='X') { cont_jogadas=11;}
            if (casas[0]=='X' && casas[4]=='X' && casas[8]=='X') { cont_jogadas=11;}            
            if (casas[2]=='X' && casas[4]=='X' && casas[6]=='X') { cont_jogadas=11;}  

            if (casas[0]=='O' && casas[1]=='O' && casas[2]=='O') { cont_jogadas=12;}
            if (casas[3]=='O' && casas[4]=='O' && casas[5]=='O') { cont_jogadas=12;}
            if (casas[6]=='O' && casas[7]=='O' && casas[8]=='O') { cont_jogadas=12;}
            if (casas[0]=='O' && casas[3]=='O' && casas[6]=='O') { cont_jogadas=12;}            
            if (casas[1]=='O' && casas[4]=='O' && casas[7]=='O') { cont_jogadas=12;}            
            if (casas[2]=='O' && casas[5]=='O' && casas[8]=='O') { cont_jogadas=12;}
            if (casas[0]=='O' && casas[4]=='O' && casas[8]=='O') { cont_jogadas=12;}            
            if (casas[2]=='O' && casas[4]=='O' && casas[6]=='O') { cont_jogadas=12;}


        } while (cont_jogadas <= 9);
        tabuleiro(casas);
        if (cont_jogadas==10){
            printf (YEL "\nEMPATE!!\n" RESET);
            emp++;
        }
        if (cont_jogadas==11){
            printf(CYN "\nVitoria do X \n" RESET);
            j1++;
        }
        if (cont_jogadas==12){
            printf(MAG "\nVitoria do O\n" RESET);
            j2++;
        }
        printf(CYN "Pontos Jogador X = %i \n" RESET, j1);
        printf(MAG "Pontos Jogador O = %i \n" RESET, j2 );
        printf(YEL "Empates          = %i \n" RESET, emp);
        printf(GRN "\nDeseja jogar novamente? S/N \n" RESET);
        scanf("%s", &res);

    }
    while (res=='s');
    return 0;
}
