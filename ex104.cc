#include <stdio.h>
#include <stdlib.h>

int main () {
     char meses[12][10] = {"janeiro",  "fevereiro", "marco",    "abril",
                          "maio",     "junho",     "julho",    "agosto",
                          "setembro", "outubro",   "novembro", "dezembro"};

    float temperatura[12], media = 0;

    for (int i = 0; i < 12; i++) {
        printf("Digite a temperatura do mes de %s: ", meses[i]);
        scanf("%d", &temperatura[i]);
        media += temperatura[i];
    }
    media = media / 12;
    printf("A media das alturas e: %.2f\n", media);

    for (int i = 0; i < 12; i++) {
            if (temperatura[i] > media) {
                printf("A temperatura do mes de %s e maior que a media\n", meses[i]);
                }
            }
    }