#include <stdio.h>
//#include "conio.h"
/*Tratamento de V e F (AND e OR)
By Cássio Telles
  e-mail: kassio@msn.com*/

int main()
{
int p, q;
//
printf("informe os Estados de P e Q - Verdadeiro:1 ou Falso:0):"); //Solicita dois valores (p) e (q)
scanf("%d%d", &p, &q); //Recebe os dois valores na mesma linha
printf("\n-----------------------");
printf("\n(p)%d AND (q)%d resulta %d", p, q, p && q); //Operador booleano AND
printf("\n-----------------------");
printf("\n(p)%d OR (q)%d resulta %d", p, q, p || q); //Operador booleano OR
printf("\n-----------------------");
printf("\n NOT (p)%d resulta %d", p, !p); //Operador booleano NOT (Nega valor de p)
printf("\n-----------------------");
printf("\n NOT (q)%d resulta %d", q, !q); //Operador booleano NOT (Nega valor de q)
printf("\n-----------------------");

//getch();
return 0;
}