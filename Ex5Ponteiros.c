#include <stdlib.h>
#include <stdio.h>


int v1, v2;
int *p = &v1, *p2 = &v2;

void alterar_Valor() {
    if (v1 > v2) {
        v1 = *p;
        printf("V1: %d\n", v1);
        printf("v2: %d", v2);
    }
    else {
        printf("V1: %d\n", v2);
        printf("V2: %d", v1);

    }
}


int main() {
    printf("Digite um valor: ");
    scanf("%d", &v1);
    printf("Digite outro valor: ");
    scanf("%d", &v2);

    alterar_Valor();

}