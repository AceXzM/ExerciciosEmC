#include <stdio.h>
#include <stdlib.h>

int main () {
    int idade[5], contagem = 0, contagemalunos = 0;
    float altura[5], media = 0;

    for (int i = 0; i < 5; i++) {
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idade[i]);
        printf("Digite a altura da pessoa %d: ", i + 1);
        scanf("%f", &altura[i]);
        media += altura[i];
        contagem++;
    }
    media = media / (float)contagem;
    printf("A media das alturas e: %.2fcm\n", media);

    for (int i = 0; i < 5; i++) {
        if (idade[i] > 13) {
            if (altura[i] < media) {
                contagemalunos++;
                }
            }
    }
    printf("E tem %d pessoas com altura menor que a media\n", contagemalunos);

}