#include <stdio.h>
#include <stdlib.h>


int main() {
    int vet[5], vet2[5], vet3[5], vet4[15];

    for (int i = 0; i < 5; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vet[i]);
    }

    for (int i = 0; i < 5; i++) {
        printf("Digite o valor pro segundo vetor %d: ", i + 1);
        scanf("%d", &vet2[i]);
    }

    for (int i = 0; i < 5; i++) {
        printf("Digite o valor pro terceiro vetor %d: ", i + 1);
        scanf("%d", &vet3[i]);
    }

    for (int i = 0, j = 0; i < 5; i++) {
        vet4[j++] = vet[i];
        vet4[j++] = vet2[i];
        vet4[j++] = vet3[i];
    }

    printf("Intercalado: ");
    for (int i = 0; i < 15; i++) {
        printf("%d ", vet4[i]);
        }
    }
