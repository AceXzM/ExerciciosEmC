#include <stdio.h>
#include <stdlib.h>

int main () {
    int arr[5] = {1, 2, 8, 9, 12};

    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            printf("O elemento %d eh par: %d\n", i, arr[i]);
        }
    }
}