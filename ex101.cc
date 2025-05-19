#include <stdio.h>
#include <stdlib.h>

int main() {
    int vet[5], vet2[5], vet3[10];

    for (int i = 0; i < 5; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vet[i]);
    }

    for (int i = 0; i < 5; i++) {
        printf("Digite o valor pro segundo vetor %d: ", i + 1);
        scanf("%d", &vet2[i]);
    }

    for (int i = 0, j = 0; i < 5; i++) {
        vet3[j++] = vet[i];
        vet3[j++] = vet2[i];
    }

    printf("Intercalado: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vet3[i]);
    }

    return 0;
}
