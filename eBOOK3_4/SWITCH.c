 #include <stdio.h>

/*SWITCH
By Cássio Telles
  e-mail: kassio@msn.com*/

 char menu(void) 
 {
   char opcaoDigitada;
   printf("\n*-----------------------------*");
   printf("\n*     CADASTRO DE CLIENTES    *");
   printf("\n*-----------------------------*");
   printf("\n*     1 - Consulta            *");
   printf("\n*     2 - Alteracao           *");
   printf("\n*     3 - Inclusao            *");
   printf("\n*     4 - Exclusao            *");
   printf("\n*     0 - Sair                *");
   printf("\n*-----------------------------*");
   printf("\n* Selecione a opcao: " );
   opcaoDigitada=getchar(); //Le do teclado a opcao
   return opcaoDigitada;
 }
 int main(void) {
 char opcao = menu();
 switch (opcao)
 {
   case '1':
     printf("\n\n Voce escolheu Consulta\n\n");
     break;
   case '2':
     printf("\n\n Voce escolheu Alteracao\n\n");
     break;
   case '3':
     printf("\n\n Voce escolheu Inclusao\n\n");
     break;
   case '4':
     printf("\n\n Voce escolheu Exclusao\n\n");
     break;
   case '0':
     printf("\n Voce escolheu SAIR\n\n");
     break;
   default:
     printf("\n Opcao INVALIDA\n\n");
   }
 return;
 }