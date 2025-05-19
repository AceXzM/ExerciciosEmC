#include <stdio.h>

int main () {
    
    int vet[5], soma = 0;

    for (int i = 0; i < 5; i++) {
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);

        soma += vet[i];
    }
    printf("A soma dos numeros eh: %d", soma);
    printf("A media dos numeros eh: %d", soma/5);
        
}