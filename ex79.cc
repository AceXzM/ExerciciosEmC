#include <stdio.h>

int main() {
    int ano_inicial = 1995;
    int ano_final = 2025;
    float salario = 1000.0;
    float aumento = 1.5 / 100.0;

    for (int ano = ano_inicial + 1; ano <= ano_final; ano++) {
        salario += salario * aumento;
        printf("Ano: %d | Aumento: %.2f%% | Salário: R$%.2f\n", ano, aumento * 100, salario);
        aumento *= 2;
    }
}
