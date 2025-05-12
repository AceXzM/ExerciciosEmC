#include <stdio.h>
#include <string.h>
#include <math.h>

int main () {
    char binario[16];

    printf("Digite um numero binario: ");
    fgets(binario, 16, stdin);
    binario[strcspn(binario, "\n")] = '\0';

    int tamanho = strlen(binario);
    int i = tamanho - 1;

    while(i >= 0) {
        int grupo = 0, base = 1;

     for (int j = 0; j < 3 && i >= 0; j++, i--) {
        if (binario[i] == '1') {
            grupo += base;
        }
            base *= 2;
        }
        printf("%d", grupo);
        }
    }

