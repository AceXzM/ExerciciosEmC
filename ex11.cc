#include <stdio.h>
#include <stdlib.h>
#include <cmath>

int main (){
    printf("Digite o primeiro numero inteiro: ");
    int num1;
    scanf("%d", &num1);
    printf("Digite o segundo numero inteiro: ");
    int num2;
    scanf("%d", &num2);
    printf("Digite um numero real: ");
    float nr1;
    scanf("%f", &nr1);

    float calc;
    calc = num1 * 2 + num2 /2;
    printf("O produto do dobro do primeiro com a metade do segundo e %.2f", calc);
    float calc2;
    calc2 = num1 * 3 + pow(nr1, 3);
    printf("O produto do triplo do primeiro com o segundo e %.2f", calc2);

}