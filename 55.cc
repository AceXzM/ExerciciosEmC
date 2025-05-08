#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>

int main () {
    int n1, n2;
    printf("Escreva dois numeros: ");
    scanf("%d", &n1);
    scanf("%d", &n2);

    for (int i = n1 + 1; i < n2; i++) {
        printf("\n%d", i);
    }
}