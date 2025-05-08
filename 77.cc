#include <stdio.h>
#include <stdlib.h>

int main () {
    int tab;
    int n1 = 0, n2 = 0;

    printf("Digite o numero da tabuada que voce deseja: ");
    scanf("%d", &tab);
    printf("Agora digite o numero que voce quer comecar: ");
    scanf("%d", &n1);
    printf("Agora digite o numero que voce quer terminar: ");
    scanf("%d", &n2);

    while (n1 > n2) {
        printf("O primeiro numero deve ser menor ou igual ao segundo\n"); 
        printf("Digite novamente o primeiro numero: ");
        scanf("%d", &n1);
        printf("Digite novamente o segundo numero: ");
        scanf("%d", &n2);
    }

    for (int i = n1; i <= n2; i++) {
        printf("\n%d X %d = %d", tab, i, i * tab);
    }
}
