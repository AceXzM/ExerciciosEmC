#include <stdio.h>

int main () {
    printf("Digite sua altura: ");
    float altura;
    scanf("%f", &altura);
    float pesoideal;
    pesoideal = (72.7 * altura) - 58;
    printf("Seu peso ideal e: %.2f", pesoideal);
}
