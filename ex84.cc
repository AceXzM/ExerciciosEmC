#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    int pedido, i = 0; 
    float total = 0;

    printf("--Cardapio da lanxonete--");
    printf("\n100 - Cachorro quente");
    printf("\n101 - Bauru Simples");
    printf("\n102 - Bauru com Ovo");
    printf("\n103 - Hamburgui");
    printf("\n104 - Chesseburgui");
    printf("\n105 - Refrizin\n");
    
    while (1) {
        printf("Digite 0 para parar\n");
        printf("Digite o codigo do pedido: ");
        scanf("%d", &pedido);

        if (pedido == 100) {
            total += 1.20;
            }
        else if (pedido == 101) {
            total += 1.30;
            }
        else if (pedido == 102) {
            total += 1.50;
            }
        else if (pedido == 103) {
            total += 1.20;
            }
        else if (pedido == 104) {
            total += 1.30;
            }
        else {
            total += 1.00;
            }
        if (pedido == 0) {
            break;
            }
        i++;
        }
        printf("O total de itens eh %d e o total do pedido eh: %2.f", i, total);
    }
    