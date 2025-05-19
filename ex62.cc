#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main () {
    int vet[5];

    for (int i = 0; i < 5; i++) {
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }

    int maior = vet[0];

    for (int i = 0; i < 5; i++) {
        if (vet[i] > maior) {
            maior = vet[i];
        }
    }
    int menor = vet[0];

    for (int i = 0; i < 5; i++) {
        if (vet[i] < menor) {
            menor = vet[i];
        }
    }
    printf("Maior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);
    printf("Soma dos numeros: %d", maior + menor);
    }