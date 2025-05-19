#include <stdio.h>
#include <stdlib.h>

int main () {
    char gabarito[] = {'A', 'B' , 'C' , 'D' , 'E' , 'D' , 'C' , 'B'}, resposta[10];
    int tamanho = sizeof(gabarito) / sizeof(gabarito[0]), acertos = 0;

    for (int i = 0; i < tamanho; i++)  {
        printf("Digite a resposta para a questao %d: \n", i + 1);
        scanf(" %c", &resposta[i]);

        if (gabarito[i] == resposta[i]) {
            acertos++;
        }
    }
    printf("Voce acertou %d questoes.\n", acertos);
}
