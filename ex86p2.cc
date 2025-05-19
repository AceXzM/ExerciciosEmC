#include <stdio.h>
#include <stdlib.h>

int main () {
    char gabarito[10], resposta[10];
    int tamanho, acertos = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite o seu gabarito: ");
        scanf("%s", gabarito);
    }

    tamanho = sizeof(gabarito) / sizeof(gabarito[0]);

    for (int i = 0; i < tamanho; i++)  {
        printf("Digite a resposta para a questao %d: \n", i + 1);
        scanf(" %c", &resposta[i]);

        if (gabarito[i] == resposta[i]) {
            acertos++;
        }
    }
    printf("Voce acertou %d questoes.\n", acertos);
}
