#include <stdio.h>
#include <cstring>
#include <ctype.h>

int main () {
    printf("Digite o primeiro numero: ");
    int num1;
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    int num2;
    scanf("%d", &num2);
    printf("Digite o terceiro numero: ");
    int num3;
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3) {
        printf("O maior numero e %d", num1);
        }
        else if (num2 > num1 && num2 > num3) {
            printf("O maior numero e %d", num2);
            }
            else {
                printf("O maior numero e %d", num3);
            }
    
}