#include <stdio.h>
#include <stdlib.h>

int main () {
    int notas[4];
    float total = 0, i2 = 0;

    for (int i = 0; i < 4; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%d", &notas[i]);
        total += notas[i];
        i2++;
    }
    printf("A media das notas sao: %.2f\n", total / i2);
    
}