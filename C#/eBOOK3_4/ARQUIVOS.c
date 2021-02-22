/*fopen()	Abre um arquivo
fclose()	Fecha um arquivo
putc()	Escreve um caractere em um arquivo
getc()	Lê um caractere de um arquivo
fssek()	Posiona o arquivo em um byte específico
fprintf()	Imprime no arquivo conjunto de caracteres
fscanf()	Transfere caractere do arquivo para o programa
feof()	Indicar fim de arquivo atingido (volta verdadeiro)
ferror()	Indica erro na operação do arquivo (volta verdadeiro)
rewind()	Recoloca o indicador de posição de arquivo no início do arquivo
remove()	Apaga um arquivo
fflush()	Descarrega um arquivo*/

/*
A função fopen() abre uma stream para uso e associa a um arquivo. Ela retorna um ponteiro de arquivo associado a este arquivo. Esta função tem a seguinte estrutura:

FILE *fopen(const char* nomearq, const char* modo );

Onde:

nomearq = É um ponteiro para uma cadeia de caracteres que forma um nome válido de arquivo e pode incluir especificação de caminho (path)
modo = Indica como este arquivo será aberto (conforme possibilidade indicada na Tabela 5)

R	Abre um arquivo texto para leitura
W	Cria um arquivo texto para escrita, - SEMPRE SOBRESCREVE O ARQUIVO
A	Anexa a um arquivo texto - ADCIONA O TEXTO SEM SOBRESCREVER
Rb	Abre um arquivo binário para leitura
wb	Cria um arquivo binário para escrita
Ab	Anexa a um arquivo binário
r+	Abre um arquivo texto para leitura/escrita
w+	Cria um arquivo texto para a leitura /escrita
a+	Anexa ou cria um arquivo texto para leitura/escrita
r+b	Abre um arquivo binário para leitura/escrita
w+b	Cria um arquivo binário para leitura/escrita
a+b	Anexa a um arquivo binário para leitura / escrita

*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

int main(void) {

  // criando a variável ponteiro para o arquivo
	  FILE * file;
	//abrindo o arquivo
	  file = fopen ("D:\\C\\arquivo.txt", "w");
      fprintf(file, "Esta é a linha 1 do arquivo\n");
	  fprintf(file, "Esta é a linha 2 do arquivo\n");
	  fprintf(file, "Esta é a linha ... do arquivo\n");
	  fprintf(file, "Esta é a linha n do arquivo\n");
	  // fechando arquivo
	  fclose(file);
	  //mensagem para o usuário
	  printf("O arquivo foi criado com sucesso!");
	  return(0);
	}