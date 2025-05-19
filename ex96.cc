#include <stdio.h>
#include <stdlib.h>

int main () {
    int vet[5], par[5], impar[5], tamanho;

    tamanho = sizeof(vet)/sizeof(vet[0]);

    for (int i = 0; i < tamanho; i++) {
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }    
    for (int i = 0; i < 5; i++) {
        if (vet[i] % 2 == 0) {
            par[i] = vet[i];
            }
        else {
            impar[i] = vet[i];
        }
        printf("Numeros pares: %d\n", par[i]);
        printf("Numeros impares: %d\n", impar[i]);
    }

}