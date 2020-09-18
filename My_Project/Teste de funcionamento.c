#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main() {
    char nome[100], 
    endereco[200], 
    ODP, OEP, 
    OEL, ODL, 
    AR, foto, 
    adicao, 
    telefone;

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

    FILE *dados;
    dados = fopen("clientes.txt", "a");
    
    fprintf(dados, "================================================\n");
    fprintf(dados, "Nome: %s\n", nome,stdout);
    fprintf(dados, "Endereco: %s\n", endereco,stdout);
    fprintf(dados, "Telefone: %d\n", telefone,stdout);
    fprintf(dados, "Graus para Perto:\n");
    fprintf(dados, "Olho Direito - %s | Olho Esquerdo: - %s\n", ODP , OEP,stdout);
    fprintf(dados, "Graus para Longe:\n");
    fprintf(dados, "Olho Direito - %s | Olho Esquerdo: - %s\n", ODL , OEL,stdout);
    fprintf(dados, "AR e FOTO\n");
    fprintf(dados, "%s | %s\n", AR, foto,stdout);
    fprintf(dados, "Adição: %i\n", adicao,stdout);
    fprintf(dados, "================================================\n");

    fclose(dados);

    return (0);
}