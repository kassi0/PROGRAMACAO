#include <stdio.h>

/*Identificação de Idade
    Data: 10/09/2020
    Aula Ao VIVO 2
    by Cássio Telles
    Ajustes técnicos Helliel | SkuLL*/ 

int main() {

   //int vF, vO, nV;  
   // iM= 16; 
   // iJ = 18;  
   // iI = 70;
    int idade;
    printf("\n Digite sua Idade - Eleicoes 2020! \n\n");
    scanf("%d",&idade);

    if ((idade >= 18)&&(idade <= 70)){
        printf("\nVoto Obrigatorio! \n");
    }
    else{
        if(idade <=15){
            printf("\nNao pode Votar! \n");
        }
        else {
            printf("\nVoto Facultativo! \n");
        }
    }

    return 0;
}