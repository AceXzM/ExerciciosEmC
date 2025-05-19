#include <stdio.h>
#include <stdlib.h>

int main () {
    int combustivel;
    float porcentagem, preco;
    int litros;
    printf("Fala patrao, vai o que hoje?: \n");
    printf("Alcool - 1 \n");
    printf("Gasolina - 2 \n");
    scanf("%d", combustivel);
    printf("Quantos litros patrao? ");
    scanf("%d", &litros);

    if (combustivel == 1 ) {
        litros = 1.90 * litros;
    }
        if (litros <= 20) {
        porcentagem = litros * 0.03;
        preco = litros - porcentagem;
        printf("O valor do alcool eh de %.2f", preco);
        }
    if (combustivel == 1 ) {
        litros = 1.90 * litros;
    }
        if (litros > 20) {
            porcentagem = litros * 0.05;
            preco = litros - porcentagem;
            printf("O valor do alcool eh de %.2f", preco);
    }
    if (combustivel == 2 ) {
        litros = 2.50 * litros;
        }
        if (litros <= 20) {
            porcentagem = litros * 0.04;
            preco = litros - porcentagem;
            printf("O valor do gasolina eh de %.2f", preco);  
        }
    if (combustivel == 2) {
        litros = 2.50 * litros;
        }
        if (litros > 20) {
            porcentagem = litros * 0.06;
            preco = litros - porcentagem;
            printf("O valor do gasolina eh de %.2f", preco);
    }
}
