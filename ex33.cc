#include <stdio.h>
#include <cstring>
#include <cmath>

int main () {
    printf("Digite o primeiro lado do triangulo: ");
    float a;
    scanf("%f", &a);
    printf("Digite o segundo lado do triangulo: ");
    float b;
    scanf("%f", &b);
    printf("Digite o terceiro lado do traingulo: ");
    float c;
    scanf("%f", &c);


    if (a + b > c && a + c > b && b + c > a) { 
    }
    if (a == b == c) {
        printf("O triangulo e equilatero");
    }
    else if ((a == b)  || (a == c) || (b == c) ) {
        printf("O triangulo e isosceles"); 
    }
    else if (a != b && b != c && c != a) {
        printf("O triangulo e escaleno");
    }
    else {
        printf("Ta malucokkkk nem e triangulo");
    }

}

