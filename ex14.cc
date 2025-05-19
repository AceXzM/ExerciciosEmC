#include <stdio.h>

int main () {
    printf("Digite o peso do seu pexe: ");
    float peso;
    scanf("%f", &peso);

    if (peso > 50) {
        float excesso;
        excesso = peso - 50;
        float val;
        val = (excesso * 4);

        printf("O valor da multa e de R$ %.2f\n", val);
        }
        else {
            printf("Voce nao precisa pagar multa!\n");
            }
        
    }
    