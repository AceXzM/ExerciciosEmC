#include <stdio.h>
#include <stdlib.h>

int main () {
    int arr[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++) {
        int *p = &arr[i];
        *p = *p * 2;
        printf("O dobro do elemento %d eh: %d\n", i, arr[i]);
    }
}