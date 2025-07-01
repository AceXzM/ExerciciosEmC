#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char arr[10], arr1[10], *p = arr, *p2 = arr1;

void comparar_Str() {
    while (*p2 != '\0') {
        *p = *p2;
        p++;
        p2++;
    }
    printf("%s", arr);
}

int main () {
    printf("Digite qualquer coisa ate 10 caracteres: ");
    fgets(arr1, sizeof(arr1), stdin);

    comparar_Str();
}