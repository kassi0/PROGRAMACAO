#include <stdio.h>
#include <string.h>

/*
Temos, abaixo, um código que exemplifica a utilização da função que faz a cópia de strings(strcpy) e retorna o tamanho da string(strlen):

*/
    int main(void) {

        char nome[15]; // O 15 representa os espaços de Caracteres validos mais o terminador que é \0
        strcpy(nome, "Fulano de Tal");
            //strcpy(string_destino, string_origem);
            //note que a string de destino é "nome"
            //a string de otigem é "Fulano de Tal"

            printf("\n Exemplo de copia de string");
            printf("\n *-------------------------*");
            printf("\n Nome copiado = %s ", nome);
            printf("\n O tamanho da String 'nome' e %li", strlen(nome));


        return 0;
    }