  #include <stdio.h>
    #include <stdbool.h> 
    #include <stdlib.h>
    #include <locale.h>

    bool E_Primo(int Numero){
        for (int i = 2; i < Numero; i++)
            if (Numero % i == 0)
                return false;
        return true;
    }

    int main(){
        setlocale(LC_ALL, "Portuguese");
        int Numero;
        printf("Digite um número para verificar se ele é primo ou não: ");
        scanf("%d", &Numero);
        
        while (Numero <= 0){
            printf("Número invalido para saber se é primo ou nao\nDigite uma número maior que 0");
            scanf("%d", &Numero);
        }  
        
        if (E_Primo(Numero))
             printf("Seu número %d é primo ", Numero);
        else
             printf("Seu número %d não é primo ", Numero);
    
        return 0;
    }