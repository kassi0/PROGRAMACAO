#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

float nome[100], 
    endereco[200], 
    ODP, OEP, 
    OEL, ODL, 
    AR, foto, 
    adicao, 
    telefone;

int dadosClientes(){

    printf("Digite o nome do Cliente: ");
    fflush(stdin);
    fgets(nome,100, stdin);

    printf("Digite Endereço: ");
    fflush(stdin);
    fgets(endereco, 200, stdin);

    printf("Telefone de contato (**)XXXXXXXXX: ");
    scanf("%d", &telefone);
    printf("Digite os Graus:\n");
    printf("*Perto*\n");
    printf("Olho Direito: ");
    scanf("%s", &ODP);
    printf("Olho Esquerdo: ");
    scanf("%s", &OEP);
    printf("*Longe*\n");
    printf("Olho Direito: ");
    scanf("%s", &ODL);
    printf("Olho Esquerdo: ");
    scanf("%s", &OEL);
    printf("Anti-Reflexo [S/N]: ");
    scanf("%s", &AR);
    printf("FotoSensivel [S/N]: ");
    scanf("%s", &foto);

    printf("Digite a Adição: ");
    scanf("%i", &adicao);

    return 0;
}

int gravarDados(){
    FILE *dados;
    dados = fopen("clientes.txt", "a");
    fprintf(dados,"================================================\n");
    fprintf(dados,"Nome: %s\n", nome);
    fprintf(dados,"Endereco: %s\n", endereco);
    fprintf(dados,"Telefone: %d\n", telefone);
    fprintf(dados,"Graus para Perto:\n");
    fprintf(dados,"Olho Direito - %s | Olho Esquerdo: - %s\n", ODP , OEP);
    fprintf(dados,"Graus para Longe:\n");
    fprintf(dados,"Olho Direito - %s | Olho Esquerdo: - %s\n", ODL , OEL);
    fprintf(dados,"AR e FOTO\n");
    fprintf(dados,"%s | %s\n", AR, foto);
    fprintf(dados, "Adição: %i\n", adicao);
    fprintf(dados,"================================================\n");



    return 0;
}

int main() {
    SetConsoleTitle("Otica Salk Clientes");
    int condicao=0;
    dadosClientes();
    while(condicao==1)
    {
        

    }
    gravarDados();  

    printf("Dados Gravados com Sucesso!");

    return 0;
}