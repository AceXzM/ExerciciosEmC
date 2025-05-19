#include <stdio.h>

int main () {
    printf("Se voce for homem digite 1, se voce for mulher digite 2: ");
    int sexo;
    scanf("%d", &sexo);
    if (sexo == 1) {
        printf("Qual sua altura atual?: ");
        float altura;
        scanf("%f", &altura);
        float pesoideal;
        pesoideal = (72.7*altura) - 58;
        printf("Seu peso ideal e %.2f", pesoideal);
    }
    else if (sexo == 2) {
        printf("Qual sua altura atual?: ");
        float altura;
        scanf("%f", &altura);
        float pesoideal;
        pesoideal = (62.1*altura) - 44.7;
        printf("Seu peso ideal e %.2f", pesoideal);

    }
}