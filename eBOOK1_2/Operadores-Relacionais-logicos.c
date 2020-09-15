#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*OPERADORES RELACIONAIS E LÓGICOS*/

int main(){
    setlocale( LC_ALL, "Portuguese_Brazil.1252" );
    int iJ, iI;
    iJ = 25;  iI = 65;
    int idade;
    scanf("%d",&idade);
    if ((idade > iJ)&&(idade < iI)){
        //se isso for V ou se isso fo F
        // A Meia Idade se caracteriza por qualquer pessoa que tenha menos de 65 anos e mais de 24
        printf("\nA idade informada %c de uma pessoa de meia-idade. \n", 130);
    }
    else{
        if(idade >= iI){
            printf("\nA idade informada %c de uma pessoa idosa. \n", 130);
        }
        else {
            printf("\nA idade informada %c de um jovem. \n", 130);
        }
    }
   return 0;
}