#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main () {
    int cidade, veiculos, acidentes, maior = -INFINITY, menor= INFINITY, total = 0, i2 = 0, media;

    for (int i = 1; i < 6; i++) {
        printf("Cidade %d\n", i);
        printf("Digite o codigo da cidade: ");
        scanf("%d", &cidade);
        printf("Digite o numero de veiculos de passeio: ");
        scanf("%d", &veiculos);
        printf("Digite a quantidade de acidentes: \n");
        scanf("%d", &acidentes); 

        if (acidentes < menor)
            menor = acidentes;
        if (acidentes> maior)
            maior = acidentes; 
        {
        if (veiculos < 2000) {
            total += veiculos;
            i2++;
            }
        }
    }

    printf("A media de veiculos das menores cidades: %d\n", total/i2);
    printf("A cidade com mais acidentes eh: %d\n", maior);
    printf("A cidade com menos acidentes eh: %d\n", menor);

}