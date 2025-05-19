#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    int vet[5], soma = 0;

    for (int i = 0; i < 5; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vet[i]);
        soma += pow(vet[i],2);
    }
    printf("A soma dos quadrados eh igual a: %d\n", soma);
}