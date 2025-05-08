#include <stdio.h>
#include <stdlib.h>

int main () {   
    int cod, cont;
    double altura, peso, maioraltura = 0, maiorpeso = 0, menoraltura = 1000, menorpeso = 1000, cod_alto, cod_baixo, cod_gordo, cod_magro;

    while (1) {
        printf("Digite o codigo do cliente: ");
        scanf("%d", &cod);
        printf("Cliente %d:\n", cod);

        printf("Digite a sua altura: ");
        scanf("%lf", &altura);
        printf("Digite seu peso: ");
        scanf("%lf", &peso);
        printf("\nDigite 0 para finalizar ou outro numero para continuar: ");
        scanf("%d", &cont);

        if (cont == 0) {
            break;
        }
        
        if (altura > maioraltura ) {
            maioraltura = altura;
            cod_alto = cod;
        }
        if (peso > maiorpeso) {
            maiorpeso = peso;
            cod_gordo = cod;
        }
        
        if (altura < menoraltura ) {
            menoraltura = altura;
            cod_baixo = cod;
        }
        if (peso < menorpeso) {
            menorpeso = peso;
            cod_magro = cod;
        }
    } 
    printf("O cliente %1.f tem a maior altura de: %2.f\n", cod_alto, maioraltura);
    printf("O cliente %1.f tem a menor altura de: %2.f\n", cod_baixo, menoraltura);
    printf("O cliente %1.f tem o maior peso de: %2.f\n", cod_gordo, maiorpeso);
    printf("O cliente %1.f tem o menor peso de: %2.f\n", cod_magro, menorpeso);
}