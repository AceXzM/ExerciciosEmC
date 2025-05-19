#include <stdio.h>
#include <stdlib.h>

int main() {
    int voto, contadores[23] = {0}, i = 0;
    float porcentagem;

    while (1) {
        printf("Digite o seu voto: ");
        scanf("%d", &voto);

        if (voto == 0) {
            break;
        }

        switch (voto) {
            case 1: voto = 1; contadores[1]++; break;
            case 2: voto = 2; contadores[2]++; break;
            case 3: voto = 3; contadores[3]++; break;
            case 4: voto = 4; contadores[4]++; break;
            case 5: voto = 5; contadores[5]++; break;
            case 6: voto = 6; contadores[6]++; break;
            case 7: voto = 7; contadores[7]++; break;
            case 8: voto = 8; contadores[8]++; break;
            case 9: voto = 9; contadores[9]++; break;
            case 10: voto = 10; contadores[10]++; break;
            case 11: voto = 11; contadores[11]++; break;
            case 12: voto = 12; contadores[12]++; break;
            case 13: voto = 13; contadores[13]++; break;
            case 14: voto = 14; contadores[14]++; break;
            case 15: voto = 15; contadores[15]++; break;
            case 16: voto = 16; contadores[16]++; break;
            case 17: voto = 17; contadores[17]++; break;
            case 18: voto = 18; contadores[18]++; break;
            case 19: voto = 19; contadores[19]++; break;
            case 20: voto = 20; contadores[20]++; break;
            case 21: voto = 21; contadores[21]++; break;
            case 22: voto = 22; contadores[22]++; break;
            case 23: voto = 23; contadores[23]++; break;
        }
        i++;
    }
     
    printf("Foram computados %d votos.\n", i);

    for (int j = 1; j <= 24; j++) {
        porcentagem = (float)contadores[j] / (float)i * 100;
        if (contadores[j] != 0) {
            printf("Jogador Camisa  %d: %d de votos com %.1f%%\n", j, contadores[j], porcentagem);
        }
    }
}
