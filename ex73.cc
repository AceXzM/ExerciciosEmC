#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>

int main() {

    printf("Lojas Quase Dois - Tabela de precos\n");
    for (int i = 1; i <= 50; i++)
        printf("\n%2d - R$ %5.2f", i, 1.99 * i);
}