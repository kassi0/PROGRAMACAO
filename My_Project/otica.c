/*
    Cadastro de Clientes Ótica Salk
    Criação: 17/09/2020
    Desenvolvedor: Cássio Telles
    Versão: 1.0.0
    Ultima Modificação: 18/09/2020
*/
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define MAX 100
//Sistema de Cores Abaixo
#define RED   "\x1B[31m"
#define GRN   "\x1B[32m"
#define YEL   "\x1B[33m"
#define BLU   "\x1B[34m"
#define MAG   "\x1B[35m"
#define CYN   "\x1B[36m"
#define WHT   "\x1B[37m"
#define RESET "\x1B[0m"

char nome[MAX], endereco[MAX], telefone[MAX], AR[MAX], foto[MAX], dataCompra[MAX] /*valor[MAX]*/;   
float ODP, OEP, OEL, ODL, //Graus Perto e Longe
CODP, COLP, EODP, EOLP, // Cilindrico e Eixo Perto
CODL, COLL, EODL, EOLL, //Cilindrico e Eixo Longe
adicao, valorPago,custo;  

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

    printf("Valor de Custo: ");
    scanf("%f", &custo);

    printf("Valor Pago: ");
    scanf("%f", &valorPago);

}

void gravarDados(){
    FILE *dados;
    dados = fopen("clientes.txt", "a"); // Variavel "a" para criar arquivo e adcionar novas entradas.
    if (dados == NULL) // Se nào conseguiu criar
    {
     printf("Problemas na CRIACAO do arquivo\n");
     EXIT_FAILURE; //Se não conseguir Criar arquivo Fecha com Falha
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
    fprintf(dados,"AR - %s", AR);
    fprintf(dados,"FOTO - %s", foto);
    fprintf(dados,"Adição: %.2f\n", adicao);
    fprintf(dados, "Data de Compra: %s", dataCompra);
    fprintf(dados, "Valor Pago: R$%.2f \n", valorPago);
    fprintf(dados, "Valor de Custo: R$%.2f \n", custo);
    fprintf(dados, "Lucro: R$%.2f \n", (valorPago - custo));
    fprintf(dados,"================================================\n\n");
    fclose(dados);
    printf("Dados Gravados com Sucesso!");
}


int main() {
    SetConsoleTitle("Otica Salk Clientes");
    char res;

    printf("###############################################################\n" );
    printf("############### CADASTRO DE CLIENTES OTICA SALK ###############\n" );
    printf("###############################################################\n" );
    printf("###############       Sistema feito em C        ###############\n" );
    printf("###############  Salva os dados em arquivo.txt  ###############\n" );
    printf("############### Lembre que C aceita apenas 0.0  ###############\n" );
    printf("###############   Endereco aceita Virgula (,)   ###############\n" );
    printf("###############    Criado por Cassio Telles     ###############\n" );
    printf("###############################################################\n\n" );


    loop1:
    dadosClientes();
    gravarDados();
    printf("\nDeseja Gravar novamente? S/N \n");
    scanf("%s", &res);
    while (res){
        if (res== 's'){
            goto loop1;
        }
        else if (res== 'n'){
            exit(1);
        }
        else printf("\n Opcao Invalida\n");
        return 0;
              
    }
    return 0;
}