#include <stdio.h>
#include <stdlib.h>

int A, *B, **C, ***D, opcao, *resultado;

void calcular() {
    B = &A;
    C = &B;
    D = &C;
    printf("1 - Dobro\n");
    printf("2 - Triplo\n");
    printf("3 - Quadruplo\n");
    printf("Digite o que deseja: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1: *B = A; printf("%d", (*B) * 2); break;
        case 2: **C = A; printf("%d", (**C) * 3); break;
        case 3: ***D = A; printf("%d", (***D) * 4); break;
    } while (opcao != 4);
}



int main () {
    printf("Digite um numero: ");
    scanf("%d", &A);

    calcular();    
}