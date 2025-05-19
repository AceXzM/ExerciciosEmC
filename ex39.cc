#include <stdio.h>

int main () {
    printf("Digite um numero: ");
    int num;
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("O numero e par");
        }
    else {
        printf("O numero e impar");
    }
}