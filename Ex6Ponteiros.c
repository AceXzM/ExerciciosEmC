#include <stdio.h>
#include <stdlib.h>

int v1, v2, dobroA, dobroB, soma;
int *p = &v1, *p2 = &v2;

void dobro_Soma() {
    *p = dobroA = v1 * 2;
    *p2 = dobroB = v2 * 2;
    soma = dobroA + dobroB;

    printf("Soma do dobro dos dois numeros: %d\n", soma);
    printf("V1: %d\n", v1);
    printf("V2: %d\n", v2);
}

int main () {
    printf("Digite um valor: ");
    scanf("%d", &v1);
    printf("Digite outro: ");
    scanf("%d", &v2);

    dobro_Soma();

}