#include <stdio.h>

int main () {
    printf("Quanto voce ganha por hora trabalhada: ");
    int hora;
    scanf("%d", &hora);
    printf("Digite suas horas mensais: ");
    int horasmes;
    scanf("%d", &horasmes);
    float salario = hora * horasmes;

    float inss, ir, sindicato;
    inss = salario * 0.08;
    ir = salario * 0.11;
    sindicato = salario * 0.05;

    float soma;
    soma = inss + ir + sindicato;
    float salarioliq;
    salarioliq = salario - soma;

    printf("O seu salario bruto e : %.2f\n", salario);
    printf("O seu inss e : %.2f\n", inss);
    printf("O seu ir e: %.2f\n", ir);
    printf("O seu sindicato e: %.2f\n", sindicato);
    printf("O seu salario liquido e: %.2f", salarioliq);

}