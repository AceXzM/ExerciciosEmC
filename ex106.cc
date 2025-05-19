#include <stdio.h>
#include <stdlib.h>

int main() {
    float bruto, salario;
    int contadores[9] = {0};
    int indice;

    while (1) {
        printf("Digite a quantidade de vendas brutas (-1 para sair): ");
        scanf("%f", &bruto);

        if (bruto == -1) {
            break;
        }

        salario = (bruto * 0.09) + 200;
        indice = (int)(salario / 100) - 2;
        
        if (indice < 0) indice = 0;
        if (indice > 8) indice = 8;

        switch (indice) {
            case 0: contadores[0]++; break;
            case 1: contadores[1]++; break;
            case 2: contadores[2]++; break;
            case 3: contadores[3]++; break;
            case 4: contadores[4]++; break;
            case 5: contadores[5]++; break;
            case 6: contadores[6]++; break;
            case 7: contadores[7]++; break;
            case 8: contadores[8]++; break;
        }
    }

    for (int j = 0; j < 9; j++) {
        if (j == 8) {
            printf("$1000 ou mais: %d vendedores\n", contadores[j]);
        } else {
            int inicio = 200 + j * 100;
            int fim = inicio + 99;
            printf("$%d - $%d: %d vendedores\n", inicio, fim, contadores[j]);
        }
    }

}
