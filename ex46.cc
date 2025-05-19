#include <stdio.h>
#include <iostream>

int main () {
    printf("Digite uma nota: ");
    int nota;
    scanf("%d", &nota);

    while (nota < 0 || nota > 10) {
        printf("Nota invalida. Digite novamente: ");
        scanf("%d", &nota);
    }
    printf("Ta serto");
}