#include <stdio.h>
#include <math.h>

int main () {
    printf("Digite o numero da tabuada que voce deseja: ");
    int n1, tabuada;
    scanf("%d", &n1);

    for (int i = 0; i < 11; i++) {
        tabuada = i * n1;
        printf("%d x %d = %d\n", n1, i, tabuada);
        }
}