#include <stdio.h>
#include <cmath>

void loop () {
    printf("Digite o valor de a: ");
    float a;
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    float b;
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    float c;
    scanf("%f", &c);

    if (a == 0) {
        printf("Digite um valor diferente de zero para a:");
        scanf("%f", &a);
    }
    float delta;
    delta = pow(b, 2) - 4 * a * c;
    if (delta < 0) {
        printf("A equacao nao tem solucao real.");
        }
        else if (delta == 0) {
            printf("A solucao tem uma soluçao real.");
            float raiz = (-b)/(2*a);
            printf("A raiz da equação é: %.2f", raiz);
            }
            else {
                printf("A equacao tem duas soluçoes reais.\n");
                float raiz1 = (-b + sqrt(delta))/(2*a);
                float raiz2 = (-b - sqrt(delta))/(2*a);
                printf("As raizes da equaçao sao: %.2f e %.2f", raiz1, raiz2);
                    }
                    }
int main () {
    loop ();
}