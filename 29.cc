#include <stdio.h>
#include <cmath>

int main () {
    printf("Digite o seu salario: ");
    double salario;
    scanf("%lf", &salario);

    float ajustesalario, diferencasalario, salarioajust;

    if (salario <= 280) {
        ajustesalario = 20;
        }
        else if (salario <= 700) {
            ajustesalario = 15;
            }
            else if (salario <= 1500) {
                ajustesalario = 10;
                }
                else {
                    ajustesalario = 5;
                }        

                salarioajust = salario + (salario * ajustesalario / 100);
                diferencasalario = salarioajust - salario;

                printf("O seu salario antes do reajuste e: %.2lf\n", salario);
                printf("O percentual de aumento do salario e: %.2lf\n ", ajustesalario);
                printf("O seu salario ajustado e: %.2lf\n", salarioajust);
                printf("A diferenca do seu salario ajustado e: %.2lf\n", diferencasalario);


}