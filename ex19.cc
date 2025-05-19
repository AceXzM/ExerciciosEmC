#include <stdio.h>

int main () {
    printf("Digite um numero: ");
    int num;
    scanf("%d", &num);
    printf("Digite outro numero: ");
    int num2;
    scanf("%d", &num2);

    if (num > num2) {
        printf("%d e maior que %d\n", num, num2);
        } else if (num2 > num) {
            printf("%d e maior que %d\n", num2, num);
            } else {
                printf("Os dois numeros sao iguais\n");
                }

}