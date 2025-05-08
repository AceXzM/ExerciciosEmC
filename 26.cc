#include <stdio.h>
#include <cstring>
#include <ctype.h>

int main () {
    printf("Digite o preco do primeiro produto: ");
    int p1;
    scanf("%d", &p1);
    printf("Digite o preco do segundo produto: ");
    int p2;
    scanf("%d", &p2);
    printf("Digite o preco do terceiro produto: ");
    int p3;
    scanf("%d", &p3);

    if (p1 < p2 && p1 < p3) {
        printf("O produto mais barato o primeiro produto e custa %d", p1);
        }
        else if (p2 < p1 && p2 < p3) {
            printf("O produto mais barato e o segundo produto e custa %d", p2);
            }
            else {
                printf("O produto mais barato e o terceiro e custa %d", p3);
            }


}