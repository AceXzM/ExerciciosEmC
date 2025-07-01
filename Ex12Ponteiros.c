#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char arr[10], arr1[10], *p = arr, *p2 = arr1;
int i = 0;

void comparar_Str() {
    while (*p != '\0') {
        if (*p == *p2) {
            printf("O caracter %d da primeira array eh igual ao da segunda: %c x %c \n", i, *p, *p2);
        }
        else {
            printf("O caracter %d nao eh igual ao da segunda: %c x %c \n", i, *p, *p2);
        }
        i++;
        p++;
        p2++;
    }

}

int main () {
    printf("Digite qualquer coisa ate 10 caracteres: ");
    scanf("%9s", &arr);
    printf("Digite outra coisa ate 10 caracteres: ");
    scanf("%9s", &arr1);

    comparar_Str();
}