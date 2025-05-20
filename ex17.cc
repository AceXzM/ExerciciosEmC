#include <stdio.h>
#include <math.h>

#define COBERTURA_POR_LITRO 6.0
#define LATA_LITROS 18.0
#define LATA_PRECO 80.0
#define GALAO_LITROS 3.6
#define GALAO_PRECO 25.0
#define FOLGA 1.10

float calcular_litros_necessarios(float area) {
    return (area / COBERTURA_POR_LITRO) * FOLGA;
}

void calcular_somente_latas(float litros, int* latas, float* preco) {
    *latas = ceil(litros / LATA_LITROS);
    *preco = (*latas) * LATA_PRECO;
}

void calcular_somente_galoes(float litros, int* galoes, float* preco) {
    *galoes = ceil(litros / GALAO_LITROS);
    *preco = (*galoes) * GALAO_PRECO;
}

void calcular_mistura(float litros, int* latas, int* galoes, float* preco) {
    *latas = (int)(litros / LATA_LITROS);
    float restante = litros - (*latas * LATA_LITROS);
    *galoes = ceil(restante / GALAO_LITROS);
    *preco = (*latas * LATA_PRECO) + (*galoes * GALAO_PRECO);
}

int main() {
    float area, litros;
    int latas, galoes;
    float preco;

    printf("Digite o tamanho da area a ser pintada em metros quadrados ");
    scanf("%f", &area);

    litros = calcular_litros_necessarios(area);

    calcular_somente_latas(litros, &latas, &preco);
    printf("\n>> Usando apenas latas de 18L\n");
    printf("%d latas -> R$ %.2f\n", latas, preco);

    calcular_somente_galoes(litros, &galoes, &preco);
    printf("\n>> Usando apenas galoes de 36L\n");
    printf("%d galoes -> R$ %.2f\n", galoes, preco);

    calcular_mistura(litros, &latas, &galoes, &preco);
    printf("\n>> Misturando latas e galoes\n");
    printf("%d latas e %d galoes -> R$ %.2f\n", latas, galoes, preco);

    return 0;
}
