#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    char texto[500];

    printf("Digite um texto: ");
    fgets(texto, sizeof(texto), stdin);

    size_t tamanho = strlen(texto);
    if (tamanho > 0 && texto[tamanho - 1] == '\n') {
        texto[tamanho - 1] = '\0';
    }

    printf("Os valores ASCII sao:\n");
    for (int i = 0; texto[i] != '\0'; i++) {
            printf("%c eh: %d\n", texto[i], (int) texto[i]);
        }
    }
