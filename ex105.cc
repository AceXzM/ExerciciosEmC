#include <stdio.h>
#include <stdlib.h>

int main () {
    int numero[50], i2 = 0, soma = 0, acima = 0, sete = 0;
    float media = 0; 

    while (1) {
        printf("Digite seu numero: ");
        scanf("%d", &numero[i2]);
        
        if (numero[i2] < 0) {
            break;
        }
        i2++;
    }

    printf("\nForam lidos %d numeros.\n", i2);

    printf("\nElemento: ");
    for (int i = 0; i < i2; i++) {
        printf("%d ", numero[i]);
    }
    for (int i = i2; i >= 0; i--) {
        printf("\nElemento %d: %d\n", i, numero[i]);
    }
    for (int i = 0; i < i2; i++) {
        soma =+ numero[i];
    }
    printf("\nA soma dos valores eh: %d\n", soma);

    for (int i = 0; i < i2; i++) {
        soma =+ numero[i];
    }
    media = (float)soma/ (float)i2;

    printf("Media dos valores eh igual a: %f\n", media);

    for (int i = 0; i < i2; i++) {
        if (numero[i] > media) {
            acima =+ 1;
            }
    }
    printf("Existem %d valores acima da media.\n", acima);

    for (int i = 0; i < i2; i++) {
        if (numero[i] < 7) {
            sete++;
            }
    }
    printf("Existem %d valores abaixo de 7.\n", sete);

    printf("O japao e meu e Nagoia pertence a mim, ele nao volta mais pra OFF THE KING THE POWER, TECARAIA");
}   