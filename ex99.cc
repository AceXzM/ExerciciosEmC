#include <stdio.h>
#include <stdlib.h>

int main () {
    int idade[5];
    float altura[5];

    for (int i = 0; i < 5; i++) {
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idade[i]);
        printf("Digite a altura da pessoa %d: ", i + 1);
        scanf("%f", &altura[i]);
    }
    for (int i = 5 - 1; i >= 1; i--) {
        printf("A pessoa %d mede %fcm e tem %d anos\n", i + 1, altura[i], idade[i]);
    }
}