#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    int voto, i = 0; 
    float t1 = 0, t2 = 0, t3 = 0, t4 = 0, nulo = 0, branco = 0;

    printf("--Opções de voto--\n");
    printf("1 - Ze pilantra\n");
    printf("2 - EudeMachado\n");
    printf("3 - Bonoliro\n");
    printf("4 - Pixilinga\n");
    printf("5 - Nulo\n");
    printf("6 - Branco\n");

    
    while (1) {
        printf("Digite 0 para parar\n");
        printf("Digite o codigo do pedido: ");
        scanf("%d", &voto);

        if (voto == 100) {
            t1++;
            }
        else if (voto == 101) {
            t2++;
            }
        else if (voto == 102) {
            t3++;
            }
        else if (voto == 103) {
            t4++;
            }
        else if (voto == 104) {
            nulo;
            }
        else {
            branco;
            }

        if (voto == 0) {
            break;
            }

        i++;
        }
        printf("Ze pilantra teve: %d", t1);
        printf("EudeMachado teve: %d", t2);
        printf("Bonoliro teve: %d", t3);
        printf("Pixilinga teve: %d", t4);
        printf("Votos Nulos: %d", nulo);
        printf("Votos Brancos: %d", branco);

    }
    