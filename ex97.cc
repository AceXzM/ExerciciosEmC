#include <stdio.h>
#include <stdlib.h>

int main() {
    int vet[20], par[20], impar[20];
    int tamanho = sizeof(vet)/sizeof(vet[0]);
    int contPar = 0, contImpar = 0;

    for (int i = 0; i < tamanho; i++) {
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }
    for (int i = 0; i < tamanho; i++) {
        if (vet[i] % 2 == 0) {
            par[contPar++] = vet[i];
        } else {
            impar[contImpar++] = vet[i];
        }
    }
    printf("Numeros pares:\n");
    for (int i = 0; i < contPar; i++) {
        printf("%d\n", par[i]);
    }
    printf("Numeros impares:\n");
    for (int i = 0; i < contImpar; i++) {
        printf("%d\n", impar[i]);
    }
}
 