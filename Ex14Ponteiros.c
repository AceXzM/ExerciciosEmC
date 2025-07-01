#include <stdio.h>
#include <stdlib.h>

char arr[10], *p = arr;

void Nectares() {
    while (*p != '\0' ) {
        printf("%s\n", p);
        p++;
    }
}

int main () {
    printf("Digite qualquer coisa: ");
    fgets(arr, sizeof(arr), stdin);    

    Nectares();
} 
