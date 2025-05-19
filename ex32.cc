#include <stdio.h>
#include <stdlib.h>
#include <cmath>

int main () {
    printf("Digite sua primeira nota: ");
    float nota1;
    scanf("%f", &nota1);
    printf("Digite sua segunda nota: ");
    float nota2;
    scanf("%f", &nota2);

    float media = (nota1 + nota2) / 2;


    if (media >= 9) {
        printf("Nota A, Aprovado \nMuito bom ");
    }
    else if (media >= 7.5) {
        printf("Nota B, Aprovado \nFoi bem ");
    }
    else if (media >= 6) {
        printf("Nota C, Aprovado \nPor pouco");
        }
    else if (media >= 4) {
        printf("Nota D, Reprovado \nVolta pro fundamental ");
    }
    else {
        printf("Nota E, Reprovado \nBurraokkkkkkkkkkkkk");
    }

}