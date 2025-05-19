#include <stdio.h>


int main () {
    printf("Digite sua primeira nota: ");
    int f1;
    scanf("%d", &f1);
    printf("Digite sua segunda nota: ");
    int f2;
    scanf("%d", &f2);
    printf("Digite sua terceira nota: ");
    int f3;
    scanf("%d", &f3);
    printf("Digite sua quarta nota: ");
    int f4;
    scanf("%d", &f4);

    int media;
    
    media = (f1 + f2 + f3 + f4) / 4;

    printf("A media das notas e: %.2d\n", media);

    return 0;

}