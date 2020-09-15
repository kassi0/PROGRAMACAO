#include <stdio.h>

//int main()
//{
//    int idade;
//    printf("Quantos anos voc%c tem: ", 136);  /* ê = 136 */
//    scanf("%d", &idade);
//    printf("%d? Puxa, voc%c parece que tem s%c %d 
//anos!\n", idade, 136, 162, idade * 2); /* ê = 136; ó = 162 */
//    return 0;
//}

int main()
{
    int x;
    for (x = 0; x <= 255; x++)
    {
        printf("[%d]: %c\n", x, x);
    }
    return 0;
}