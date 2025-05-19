#include <stdio.h>
#include <stdlib.h>

int main () {
    int i = 0; 
    double colecao, cds[colecao], soma = 0;
    printf("Digite a quantidade de cds na colecao: ");
    scanf("%d",&colecao);
    
    while (i < colecao) {
        printf("Digite o valor de cada CD: ");
        scanf("%d", &cds[i]);
        soma += cds[i];
        if (cds[i] < 0) {
        break;
    
    }
        i++;
    }
    float media = soma/i;
    printf("A media do valor dos cds eh: R$%.2f", media);
}
