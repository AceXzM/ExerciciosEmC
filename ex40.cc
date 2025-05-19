#include <stdio.h>
#include <cmath>


int main()
{
    float numero;
    printf("Digite um número: ");
    scanf("%f", &numero);
    if (floor(numero) == numero)
        printf("Inteiro");
    else
        printf("Decimal");
    return 0;
}