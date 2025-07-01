#include <stdio.h>
#include <stdlib.h>

int main () {
    float arr[10] = {1,2,3,4,5,6,7,8,9,10};

    for (int j = 0; j < 10; j++) {
        printf("Posicao %d, Endereco: %p\n", j, &arr[j]); 
    }

}