#include <stdio.h>

/*Identificação de Idade
    Data: 10/09/2020
    Aula Ao VIVO 2
    by Cássio Telles*/ 

int main() {

    int iJ, iI, iM;
    iM= 16; 
    iJ = 18;  
    iI = 70;
    int idade;
    printf("\n Digite sua Idade - Eleicoes 2020! \n\n");
    scanf("%d",&idade);

    if ((idade > iJ)&&(idade < iI)){
        printf("\nVoto Obrigatorio! \n");
    }
    else{
        if((idade >= iM)&&(idade < iJ)){
            printf("\nVoto Facultativo! \n");
        }
        else {
            printf("\nNao precisa Votar! \n");
        }
    }

    return 0;
}