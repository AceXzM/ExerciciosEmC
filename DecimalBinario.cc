#include <stdio.h>
#include <string.h>
#include <math.h>

int main () {
    char binario[16];
    int total = 0, tamanho, potencia;

    printf("Digite um numero binario: ");
    fgets(binario, 16, stdin);
    binario[strcspn(binario, "\n")] = '\0';

    tamanho = strlen(binario);
    potencia = 0;

    for (int i = tamanho - 1; i >= 0; i--) {
        int digito = binario[i] - '0';
        if (digito == 0 || digito == 1) {
            total += digito * pow(2, potencia);
            potencia++;
        } else {
            printf("Caractere invalido: %c\n", binario[i]);
        }
    }
    printf("O numero %s em decimal eh: %d\n", binario, total);
}

