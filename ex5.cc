#include <stdio.h>

int main() {
    printf("Digite quantos metros voce quer converter: ");
    float f1;
    scanf("%f", &f1);

    float centi;

    centi = f1 * 100;  

    printf("%.2fm sao %.2fcm\n", f1, centi);

    return 0;
}
