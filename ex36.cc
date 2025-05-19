#include <cmath>
#include <stdio.h>

int main () {
    printf("Digite um ano: ");
    int ano;
    scanf("%d", &ano);

    if (ano % 4 == 0) {
        printf("Esse ano e bissexto.\n");
    }
    else {
        printf("Esse ano nao e bissexto.\n");
    }
}