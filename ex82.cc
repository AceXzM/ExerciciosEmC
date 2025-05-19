#include <stdio.h>
#include <stdlib.h>

int main() {
    int parcelas = 0;
    float juros, divida, valorparcelas, valortotal;

    printf("Digite o valor da divida: ");
    scanf("%f", &divida);
    printf("Digite o valor dos juros: ");
    scanf("%f", &juros);
    printf("Digite a quantidade de parcelas: ");
    scanf("%d", &parcelas);

    juros = juros / 100;

    for (int i = 1; i < parcelas + 1; i++) {
        
        valorparcelas = (divida * (juros) * i);
        valortotal = divida - valorparcelas;
        
        printf("\nParcela %d:", i);
        printf("\nValor da divida: R$%2.f", valortotal);
        printf("\nValor da parcela: R$%2.f", valorparcelas);
        printf("\nValor dos juros: %1.f %", juros * 100);
        
        if (valortotal - valorparcelas < 0) {
            break;
        }

    }

}