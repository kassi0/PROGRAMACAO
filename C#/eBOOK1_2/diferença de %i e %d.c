#include <stdio.h>

int main ()
{
int a = 1000; // número 1000 escrito na base de 10(decimal)
 
int b = 01750; //número 1000 escrito na base de 8(octal)
 
int c = 0x3E8; //número 1000 escrito na base de 16(hexadecimal)
 
//Utilizar %i ou %d para output, não tem diferença
 
printf("%i\n", a);
 
printf("%i\n", b);
 
printf("%i\n", c);
 
printf("\n");
 
printf("%d\n", a);
 
printf("%d\n", b);
 
printf("%d\n", c);

    return 0;
}