#include <stdio.h>

int main () {
    printf("Digite o valor do primeiro lado: ");
    int lado1;
    scanf("%d", &lado1);
    printf("Digite o valor do segundo lado: ");
    int lado2;
    scanf("%d", &lado2);

    int area;

    area = lado1 * lado2;
    printf("A area do quadrado e: %d", area);
    
    int dobro;
    dobro = area * 2;
    printf("\nO dobro da area e: %d", dobro);

}