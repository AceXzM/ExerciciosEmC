#include <stdio.h>
#include <stdlib.h>

int main() {
    int vet[10];

    for (int i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vet[i]);
    }
    for (int i = 10; i >= 0; i--) {
        printf("O valor %d eh: %d\n", i, vet[i]);
    }
}