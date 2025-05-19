#include <stdio.h>
#include <stdlib.h>

int main() {
    int voto, contadores[7] = {0}, i = 0;
    float porcentagem = 0;
    char *sistema[] = {"", "Windows", "Linux", "MacOS", "Unix", "Netware", "Outro"};

    while (1) {
        printf("--ENQUETE--\n");
        printf("QUAL MELHOR SISTEMA OPERACIONAL?\n");
        printf("1 - Windows\n");
        printf("2 - Linux\n");
        printf("3 - Mac OS\n");
        printf("4 - Unix\n");
        printf("5 - Netware\n");
        printf("6 - Outro\n");
        printf("7 - Encerrar programa\n");

        printf("Digite seu voto: ");
        scanf("%d", &voto);

        if (voto == 7) {
            break;
        }

        if (voto < 1 || voto > 6) {
            printf("Voto inválido! Tente novamente.\n");
            continue;
        }

        switch (voto) {
            case 1: voto = 1; contadores[1]++; break;
            case 2: voto = 2; contadores[2]++; break;
            case 3: voto = 3; contadores[3]++; break;
            case 4: voto = 4; contadores[4]++; break;
            case 5: voto = 5; contadores[5]++; break;
            case 6: voto = 6; contadores[6]++; break;
        }
        i++;
    }

    printf("\nRESULTADO DA ENQUETE:\n");
    for (int j = 1; j <= 6; j++) {
        if (contadores[j] != 0) {
            porcentagem = (float)contadores[j] / i * 100;
            printf("Sistema %s: %d votos (%.1f%%)\n", sistema[j], contadores[j], porcentagem);
        }
    }
}
