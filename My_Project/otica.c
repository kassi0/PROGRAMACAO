#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#define MAX 100

char nome[MAX], endereco[MAX], telefone[MAX], AR[MAX], foto[MAX];     
float ODP, OEP, OEL, ODL, adicao;

void dadosClientes(){

    printf("Digite o nome do Cliente: ");
    fflush(stdin);
    fgets(nome, MAX, stdin);

    printf("Digite Endereco: ");
    fflush(stdin);
    fgets(endereco, MAX, stdin);

    printf("Telefone de contato (**)XXXXXXXXX: ");
    fflush(stdin);
    fgets(telefone, MAX, stdin);

    printf("Digite os Graus:\n");
    printf("*Perto*\n");
    printf("Olho Direito: ");
    scanf("%f", &ODP);
    printf("Olho Esquerdo: ");
    scanf("%f", &OEP);
    printf("*Longe*\n");
    printf("Olho Direito: ");
    scanf("%f", &ODL);
    printf("Olho Esquerdo: ");
    scanf("%f", &OEL);
    printf("Anti-Reflexo [S/N]: ");
    fflush(stdin);
    fgets(AR, MAX, stdin);
    printf("FotoSensivel [S/N]: ");
    fflush(stdin);
    fgets(foto, MAX, stdin);

    printf("Digite a Adicao: ");
    scanf("%f", &adicao);

}

void gravarDados(){
    FILE *dados;
    dados = fopen("clientes.txt", "a");
    if (dados == NULL) // Se nào conseguiu criar
    {
     printf("Problemas na CRIACAO do arquivo\n");
     EXIT_FAILURE;
    }
    fprintf(dados,"================================================\n");
    fprintf(dados,"Nome: %s", nome);
    fprintf(dados,"Endereco: %s", endereco);
    fprintf(dados,"Telefone: %s", telefone);
    fprintf(dados,"Graus para Perto:\n");
    fprintf(dados,"Olho Direito: %.2f | Olho Esquerdo: %.2f\n", ODP , OEP);
    fprintf(dados,"Graus para Longe:\n");
    fprintf(dados,"Olho Direito: %2.f | Olho Esquerdo: %.2f\n", ODL , OEL);
    //fprintf(dados,"AR e FOTO\n");
    fprintf(dados,"AR - %s", AR);
    fprintf(dados,"FOTO - %s", foto);
    fprintf(dados,"Adição: %.2f\n", adicao);
    fprintf(dados,"================================================\n\n");
    fclose(dados);
    printf("Dados Gravados com Sucesso!");
}

int main() {
    SetConsoleTitle("Otica Salk Clientes");
    //int condicao=1;
    char res;
    dadosClientes();
    gravarDados();
    printf("\nDeseja Gravar novamente? S/N \n");
    scanf("%s", &res);
    while (res){
        if (res== 's'){
            return main();
        }
        else
        exit(1);
        
    }
    return 0;
}