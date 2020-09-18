#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

int main(void)
{
    SetConsoleTitle("Printf seu nome em arquivo txt");
  FILE *pont_arq; // cria variável ponteiro para o arquivo
  char palavra[200]; // variável do tipo string
  
  //abrindo o arquivo com tipo de abertura w
  pont_arq = fopen("Nome.txt", "w+b");
  
  //testando se o arquivo foi realmente criado
  if(pont_arq == NULL)
  {
  printf("Erro na abertura do arquivo!");
  return 1;
  }
  
  printf("Digite seu nome: ");
  scanf("%s", palavra);
  
  //usando fprintf para armazenar a string no arquivo
  fprintf(pont_arq, "%s \n", palavra);
  
  //usando fclose para fechar o arquivo
  fclose(pont_arq);
  
  printf("Dados gravados com sucesso!");
  
  getch();
  return(0);
}