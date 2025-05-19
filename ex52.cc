#include <stdio.h>
#include <cmath>

int main () {
    float numeros[5];

    for (int i = 0; i < 5; i++) {
        printf("Digite 5 numeros: ");
        scanf("%f", &numeros[i]);
        }

    float maior_numero = -INFINITY;

    for (int i = 0; i < 5; i++)
    {
    if (numeros[i] > maior_numero)
        {
        maior_numero = numeros[i];
        }
    }
    printf("O maior valor e : %.2f\n", maior_numero);
    return 0;

}