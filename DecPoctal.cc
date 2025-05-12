#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero, i = 0, numero_incial;
    int binario[16]; 

    printf("Digite um numero decimal: ");
    scanf("%d", &numero);

    numero_incial = numero;
 
    while (numero > 0) {
        binario[i] = numero % 8; 
        numero = numero / 8;    
        i++;                      
    }
    printf("O numero %d em octal eh: ", numero_incial);
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]); 
    }
    printf("\n");

}

    
