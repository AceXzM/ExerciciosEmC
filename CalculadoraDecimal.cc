#include <stdlib.h>
#include <stdio.h>

int main() {
    int numero, i = 0;
    int binario[16]; 

    printf("Digite um numero decimal: ");
    scanf("%d", &numero);

 
    while (numero > 0) {
        binario[i] = numero % 2; 
        numero = numero / 2;    
        i++;                      
    }
    printf("O numero %d binario e: ", numero);
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binario[j]); 
    }
    printf("\n");

}
