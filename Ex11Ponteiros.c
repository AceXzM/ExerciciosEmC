#include <stdio.h>
#include <stdlib.h>

int v1, v2, v3;
int *p = &v1, *p2 = &v2, *p3 = &v3;

int ordenarVariaveis() {
    if (v1 > v2 && v2 > v3) {
        int temp = *p;
        *p = *p3;
        *p2 = *p2;
        *p3 = temp;

        printf("O menor valor: %d\n", v1);
        printf("O segundo menor: %d\n", v2);
        printf("O maior valor: %d", v3);
    }

    if (v2 > v1 && v1 > v3) {
        int temp = *p2, temp2 = *p;
        *p = *p3;
        *p2 = temp2;
        *p3 = temp;

        printf("O menor valor: %d\n", v1);
        printf("O segundo menor: %d\n", v2);
        printf("O maior valor: %d", v3);
    }
    else {
        printf("O menor valor: %d\n", v1);
        printf("O segundo menor: %d\n", v2);
        printf("O maior valor: %d", v3);
    }

    if (v1 == v2 || v2 == v3) {
        printf("\n1");
        return 1; 
    }
    else {
        printf("\n0");
        return 0;
    }
}

int main () {
    printf("Digite um valor: ");
    scanf("%d", &v1);
    printf("Digite um valor: ");
    scanf("%d", &v2);
    printf("Digite um valor: ");
    scanf("%d", &v3);

    ordenarVariaveis();

}