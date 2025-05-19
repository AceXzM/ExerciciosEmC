#include <stdio.h>
#include <cmath>

int main () {
    printf("Quantos metros quadrados voce quer pintar?: ");
    float metros;
    scanf("%f", &metros);
    float baldes = ceil(metros / (3 * 18));

    float total = (baldes * 80);

    printf("Voce precisara de %.2f baldes de tinta que custarao R$%.2f \n", baldes, total);

}