#include <stdio.h>
#include <stdlib.h>

int main () {
    int candidato1 = 0, candidato2 = 0, candidato3 = 0, eleitores;

    printf("Digite a quantidade de eleitores: ");
    scanf("%d", &eleitores);

    char voto;

    for (int i = 0; i < eleitores; i++) {
        printf("Digite o numero do voto (1, 2 ou 3): ");
        scanf(" %c", &voto);

        if (voto == '1') {
            candidato1++;
        } else if (voto == '2') {
            candidato2++;
        } else if (voto == '3') {
            candidato3++;
        } else {
            printf("Voto inválido.\n");
        }
    }

    printf("\nResultado da votação:\n");
    printf("Candidato 1: %d\n", candidato1);
    printf("Candidato 2: %d\n", candidato2);
    printf("Candidato 3: %d\n", candidato3);

}