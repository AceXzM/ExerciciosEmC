#include <stdio.h>
#include <stdlib.h>

int main () {
    float total,soma = 0;
    int n = 1, m = 1;
    printf("Digite ate qual numero voce deseja: ");
    scanf("%f", &total);

    for (int i = 0; i < total; i++) {
        printf("%d / %d\n", n , m);
        m += 2;
        n++;        
        soma += (float)n / (float)m;
    }
    printf("O valor da soma eh: %.2f\n", soma);
}