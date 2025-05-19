#include <stdio.h>
#include <stdlib.h>

int main () {
    int vet[5];

    for (int i = 0; i < 5; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vet[i]);
    }
    for (int i = 0; i < 5; i++) {
        printf("O valor %d eh: %d\n", i + 1, vet[i]);
    }
}