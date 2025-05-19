#include <stdio.h>
#include <stdlib.h>

int main () {

    printf("\n--- LOJAS TABAJARA ---\n"); 
    int produto = 0;
    float dinheiro, valor = 0, total = 0;
    
    while (true) {
        produto++;
        printf("Produto %d: R$ ", produto);
        scanf("%f", &valor); 
        if (valor == 0) 
            break;
        total += valor;
    }

        printf("Total: R$%2.f", total);
        printf("\nValor pago em dinheiro: ");
        scanf("%f", &dinheiro);
        printf("Troco: R$%f", dinheiro - total);

}
