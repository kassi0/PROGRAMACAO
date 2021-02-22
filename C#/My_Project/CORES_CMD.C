#include <stdio.h>

#define RED   "\x1B[31m"
#define GRN   "\x1B[32m"
#define YEL   "\x1B[33m"
#define BLU   "\x1B[34m"
#define MAG   "\x1B[35m"
#define CYN   "\x1B[36m"
#define WHT   "\x1B[37m"
#define RESET "\x1B[0m"

int main()
{
  printf(RED "vermelho\n" RESET);
  printf(GRN "verde\n" RESET);
  printf(YEL "amarelo\n" RESET);
  printf(BLU "azul\n" RESET);
  printf(MAG "magenta\n" RESET);
  printf(CYN "ciano\n" RESET);
  printf(WHT "branco\n" RESET);

  return 0;
}