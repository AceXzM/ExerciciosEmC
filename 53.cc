#include <stdio.h>
#include <cmath>

int main () {
    float total, aux;
    
    for (int i = 0; i < 5; i++){
        printf("Digite um numero: ");
        scanf("%f", &aux);
        total += aux;
    }

    printf("A media dos numeros e: %.2f\n", total / 5 );
}