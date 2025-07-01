#include <stdio.h>
#include <stdlib.h>

int a, b;
int *p = &a, *p2 = &b;

void alterar_Valor() {
    int temp = *p;
    *p = *p2;
    *p2 = temp;

    printf("O valor de A agora eh: %d\n", a);
    printf("O valor de B agora eh: %d", b);
}


int main() {
    printf("Digite um valor para A: ");
    scanf("%d", &a);
    printf("Digite um valor para B: ");
    scanf("%d", &b);

    alterar_Valor();

}