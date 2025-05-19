#include <stdio.h>

int main() {
    int numero, digito;

    printf("Digite a sequencia de numeros naturais: ");
    scanf("%d", &numero);

    printf("Numero invertido: ");
    while (numero > 0) {
        digito = numero % 10; 
        printf("%d", digito);
        numero /= 10;
    }
    printf("\n");
}
