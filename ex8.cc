#include <stdio.h>

int main () {
    printf("Quanto voce ganha por hora trabalhada: ");
    int hora;
    scanf("%d", &hora);
    printf("Digite suas horas mensais: ");
    int horasmes;
    scanf("%d", &horasmes);
    int salario;
    salario = hora * horasmes;

    printf("Seu salario e: %d", salario);

}