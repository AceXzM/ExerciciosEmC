#include <stdio.h>
#include <stdlib.h>

int main () {
    int n;
    float soma = 0;
    printf("Digite um valor para n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("1/%d\n", i);
        soma += 1/(float)i;
    }
    printf("H = %2.f", soma);
}