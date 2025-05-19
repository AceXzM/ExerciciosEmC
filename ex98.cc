#include <stdio.h>
#include <stdlib.h>

int main () {
    int vet[5], soma = 0, mult = 0;

    for (int i = 0; i < 5; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vet[i]);
        soma += vet[i];
        mult *= vet[i];
    }
    printf("A soma eh igual a: %d\n", soma);
    printf("A multiplicacao eh igual a: %d \n", mult);
}