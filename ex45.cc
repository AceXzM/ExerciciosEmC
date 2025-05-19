#include <stdio.h>
#include <stdlib.h>

int main () {
    float desconto, total, escolha, cartao, kg;
    printf("Catálogo: \n");
    printf("1- File Duplo: R$ 4,90 \n");
    printf("2- Alcatra:  R$5,90 \n");
    printf("3- Picanha: R$6,90 \n");
    printf("O que vai levar hoje?: ");
    scanf("%f", &escolha);
    printf("Quantos kg?: ");
    scanf("%f", &kg);
    printf("Tem cartao tabajara? 1 - Sim 2 - Nao: ");
    scanf("%f", &cartao);

    if (escolha == 1) {
        if (cartao == 1) 
        total = 4.90 * kg;
        desconto = 0.05 * total;
        total = total - desconto;
        printf("CUPOM FISCAL\n");
        printf("Valor do desconto: R$%.2f \n", desconto);
        printf("Quantidade de kg: %.2f \n", kg);
        printf("Total : R$ %.2f\n", total);
        }
        else if (cartao == 2)  {
            total = 4.90 * kg;
            printf("Total sem desconto: R$ %.2f\n", total);
        }
    if (escolha == 2) {
        if (cartao == 1) {
        total = 5.90 * kg;
        desconto = 0.05 * total;
        total = total - desconto;
        printf("CUPOM FISCAL\n");
        printf("Valor do desconto: R$%.2f \n", desconto);
        printf("Quantidade de kg: %.2f \n", kg);
        printf("Total : R$ %.2f\n", total);
        }
        else if (cartao == 2) {
            total = 5.90 * kg;
            printf("Total sem desconto: R$ %.2f\n", 5.90 * total);
        }
    }
    if (escolha == 3) {
       if (cartao == 1) {
       total = 6.90 * kg;
       desconto = 0.05 * total;
       total = total - desconto;
        printf("CUPOM FISCAL\n");
        printf("Valor do desconto: R$%.2f \n", desconto);
        printf("Quantidade de kg: %.2f \n", kg);
        printf("Total : R$ %.2f\n", total);
        }   
        else if (cartao == 2) {
            total = 6.90 * kg;
            printf("Total sem desconto: R$ %.2f\n", 6.90 * total);
            }
        }
}
    