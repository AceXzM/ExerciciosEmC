#include <stdio.h>
#include <stdlib.h>

int main () {  
    int x = 40, x2 = 38;
    int *p = &x, *q = &x2; //Declaração de um ponteiro

    if ((void*)p > (void*)q) {
        printf("O %d eh maior que %d e seu endereco eh: %p", *p, *q, (void*)p); //Imprimir endereço de uma variavel alocada no ponteiro        
    }
    else {
        printf("O %d eh maior que %d e seu endereco eh: %p", *q, *p, (void*)q);
    }
}