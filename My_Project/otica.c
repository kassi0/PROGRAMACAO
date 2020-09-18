/*
    Cadastro de Clientes Ótica Salk
    Criação: 17/09/2020
    Desenvolvedor: Cássio Telles
    Versão: 1.0.0
    Ultima Modificação: 18/09/2020
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#define MAX 100

char nome[MAX], endereco[MAX], telefone[MAX], AR[MAX], foto[MAX], dataCompra[MAX], valor[MAX];     
float ODP, OEP, OEL, ODL, //Graus Perto e Longe
CODP, COLP, EODP, EOLP, // Cilindrico e Eixo Perto
CODL, COLL, EODL, EOLL, //Cilindrico e Eixo Longe
adicao;

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

    printf("***Digite os Graus/Cilindrico/Eixo:***\n");
    printf("\n*Perto*\n");
    printf("Olho Direito: ");
    scanf("%f", &ODP);
    printf("Cil Direito: ");
    scanf("%f", &CODP);
    printf("Eixo Direito: ");
    scanf("%f", &EODP);
    printf("Olho Esquerdo: ");
    scanf("%f", &OEP);
    printf("Cil Esquerdo: ");
    scanf("%f", &COLP);
    printf("Eixo Esquerdo: ");
    scanf("%f", &EOLP);
    printf("\n*Longe*\n");
    printf("Olho Direito: ");
    scanf("%f", &ODL);
    printf("Cil Direito: ");
    scanf("%f", &CODL);
    printf("Eixo Direito: ");
    scanf("%f", &EODL);
    printf("Olho Esquerdo: ");
    scanf("%f", &OEL);
    printf("Cil Esquerdo: ");
    scanf("%f", &COLL);
    printf("Eixo Esquerdo: ");
    scanf("%f", &EOLL);
    printf("Anti-Reflexo [S/N]: ");
    fflush(stdin);
    fgets(AR, MAX, stdin);
    printf("FotoSensivel [S/N]: ");
    fflush(stdin);
    fgets(foto, MAX, stdin);

    printf("Digite a Adicao: ");
    scanf("%f", &adicao);

    printf("Data da Compra: ");
    fflush(stdin);
    fgets(dataCompra, MAX, stdin);

    printf("Valor: ");
    fflush(stdin);
    fgets(valor, MAX, stdin);

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
    fprintf(dados,"Olho Direito: %.2f | Cilindrico: %.2f | Eixo: %.2f\n", ODP , CODP, EODP);
    fprintf(dados,"Olho Esquerdo: %.2f | Cilindrico: %.2f | Eixo: %.2f\n", OEP , COLP, EOLP);
    fprintf(dados,"Graus para Longe:\n");
    fprintf(dados,"Olho Direito: %.2f | Cilindrico: %.2f | Eixo: %.2f\n", ODL , CODL, EODL);
    fprintf(dados,"Olho Esquerdo: %.2f | Cilindrico: %.2f | Eixo: %.2f\n", OEL , COLL, EOLL);
    //fprintf(dados,"AR e FOTO\n");
    fprintf(dados,"AR - %s", AR);
    fprintf(dados,"FOTO - %s", foto);
    fprintf(dados,"Adição: %.2f", adicao);
    fprintf(dados, "Data de Compra: %s", dataCompra);
    fprintf(dados, "Valor: R$%s \n", valor);
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