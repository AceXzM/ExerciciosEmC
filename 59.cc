#include <stdio.h>


int main () {
    int num, numerospares = 0, numerosimpares = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num);

        if (num % 2 == 0) {
            numerospares++;
            }
        else {
            numerosimpares++;
        }

    }
    printf("Temos %d pares e %d impares", numerospares, numerosimpares);
}