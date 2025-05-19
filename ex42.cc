#include <stdio.h>
#include <stdlib.h>

int main () {
    int resposta1, resposta2, resposta3, resposta4 , resposta5;
    int soma = 0;

    printf("Entrevista: ");
    printf("Primeira pergunta: Telefonou para vitima? 1 - Sim 2 - Nao\n");
    scanf("%d", &resposta1);
    printf("Segunda pergunta: Esteve no local do crime? 1 - Sim 2 - Nao\n");
    scanf("%d", &resposta2);
    printf("Terceira pergunta: Mora perto da vitima? 1 - Sim 2 - Nao\n");
    scanf("%d", &resposta3);
    printf("Quarta pergunta: Devia pra vitima? 1 - Sim 2 - Nao\n");
    scanf("%d", &resposta4);
    printf("Quinta pergunta: Ja trabalhou com a vitima? 1 - Sim 2 - Nao\n");
    scanf("%d", &resposta5);

    if (resposta1 == 1) {
        soma += 1;
        }
    if (resposta2 == 1) {
        soma += 1;
        }
    if (resposta3 == 1) {
        soma += 1;
        }
    if (resposta4 == 1) {
        soma += 1;
    }
    if (resposta5 == 1) {
        soma += 1;
    }
    if (soma <= 1) {
        printf("Ta de boa");
    }
    if (soma == 2) {
        printf("Vai ser investigado");
        }
    if (soma >= 3 or soma == 4) {
        printf("Participou mas nao quer admitir");
        }
    if (soma == 5) {
        printf("Vai pro xilindro");
    }
}
