#include <stdio.h>

int main() {
    char atleta[50];
    float salto[5], maior = -9999, menor = 9999, media = 0;
    float soma = 0, cont = 0;

    printf("Digite o nome do atleta: ");
    scanf("%s", atleta);

    for (int i = 0; i < 5; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%f", &salto[i]);

        if (salto[i] > maior)
            maior = salto[i];
        if (salto[i] < menor)
            menor = salto[i];
    }

    for (int i = 0; i < 5; i++) {
        if (salto[i] != maior && salto[i] != menor) {
            soma += salto[i];
            cont++;
        }
    }

    media = soma / cont;

    printf("\nAtleta: %s\n", atleta);
    printf("Melhor Nota: %.2f\n", maior);
    printf("Menor Nota: %.2f\n", menor);
    printf("Media das demais notas: %.2f\n", media);

}
