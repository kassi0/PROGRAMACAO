#include <stdio.h>

int main(void){

    int N1, N2, N3, N4, Media;

    printf("Media dos Alunos\n\n");

    printf("Digite nota 1: ");
    scanf("%d", &N1);
    printf("Digite nota 2: ");
    scanf("%d", &N2);
    printf("Digite nota 3: ");
    scanf("%d", &N3);
    printf("Digite nota 4: ");
    scanf("%d", &N4);
    
    Media = (N1 + N2 + N3 + N4) / 4 ;

    if (Media >= 7.0){

        printf("Aprovado com Media: %d\n",Media);
    }
    else {
        printf("Reprovado com Media: %d\n",Media);

    }
    system("pause");
    return 0;
}