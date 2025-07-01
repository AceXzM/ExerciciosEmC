#include <stdio.h>
#include <stdlib.h>

int v1, v2, soma;
int *p = &v1, *p2 = &v2;

void Soma() {
    *p = soma = v1 + v2;
}

int main () {
    printf("Digite um valor: ");
    scanf("%d", &v1);
    printf("Digite outro: ");
    scanf("%d", &v2);

    Soma(v1,v2);

    printf("Soma dos dois numeros: %d\n", v1);
}