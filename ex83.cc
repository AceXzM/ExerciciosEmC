#include <stdio.h>
#include <stdlib.h>

int main () {

    int numero, caso1 = 0, caso2 = 0, caso3 = 0, caso4 = 0;

    while (1) {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (numero <= 25) {
            caso1++;
        }
        else if (numero <= 50) {
            caso2++;
        }
        else if (numero <= 75) {
            caso3++;
        }
        else {
            caso4++;
            }
        
        if (numero < 0) {
            break;
        }
    }
    printf("Primeiro caso: %d\n", caso1);
    printf("Segundo caso: %d\n", caso2);
    printf("Terceiro caso: %d\n", caso3);
    printf("Quarto caso: %d\n", caso4); 
    
}