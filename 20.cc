#include <stdio.h>
#include <cmath>

int main () {
    printf("Digite um numero: ");
    float n;
    scanf("%d", &n);

    if (n > 0) {
        printf("O numero e positivo");
        }
        else if (n < 0) {
            printf("O numero e negativo");
            }
            else {
                printf("O numero e neutro");
                }
    } 
