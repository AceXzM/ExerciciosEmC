#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main () {
    int vet[5];

    for (int i = 0; i < 5; i++) {
        do {
            printf("Digite um numero entre 0 e 1000: ");
            scanf("%d", &vet[i]);

            if (vet[i] < 0 || vet[i] > 1000) {
                printf("Numero invalido! Tente novamente.\n");
            }

        } while (vet[i] < 0 || vet[i] > 1000);
    }

    int maior = vet[0];
    int menor = vet[0];

    for (int i = 1; i < 5; i++) {
        if (vet[i] > maior) {
            maior = vet[i];
        }
        if (vet[i] < menor) {
            menor = vet[i];
        }
    }

    printf("Maior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);
    printf("Soma dos numeros: %d\n", maior + menor);

    return 0;
}
