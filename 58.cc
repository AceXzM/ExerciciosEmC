#include <stdio.h>

int main () {
    int base, n = 1, expoente; 
    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    for (int i = 1; i <= expoente; i++) {
        n *= base;
        }

    printf("O resultado eh: %d", n);
}