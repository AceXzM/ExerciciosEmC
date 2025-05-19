#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

    int totalfunc = 0, func100 = 0, i = 0;
    float salario[100], somaabono = 0, abono[100], maiorabono = 0;

    while (1) {
        printf("Digite o salario do funcionario (0 para sair): ");
        scanf("%f", &salario[i]);

        if (salario[i] == 0) {
            break;
        }

        abono[i] = salario[i] * 0.2;

        if (abono[i] < 100) {
            abono[i] = 100;
            func100++;
        }

        somaabono += abono[i];

        if (abono[i] > maiorabono) {
            maiorabono = abono[i];
            }

        somaabono += abono[i];

        i++;   
        }
        totalfunc = i;

        for (int j = 0; j < i; j++) {
            printf("Funcionario %d: R$ %.2f\n", j+1, salario[j]);
            printf("Abono: R$ %.2f\n", abono[j]);
            printf("\n");
            }

        printf("Numero total de funcionarios: %d\n", totalfunc);
        printf("Total de abonos: R$ %.2f\n", somaabono);
        printf("Maior abono: R$ %.2f\n", maiorabono);
        printf("Funcionarios com abono de R$ 100, 00: %d\n ", func100); 
    }