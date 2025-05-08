#include <stdio.h>
#include <cmath>

int main () {
    char sexo;
    printf("Digite F para Feminino ou M para Masculino: ");
    scanf("%c", &sexo);
    if (sexo == 'F' || sexo == 'f')
    {
        printf("Feminino");
    }
    else if (sexo == 'M' || sexo == 'm')
    {
        printf("Masculino");
    }
    else
    {
        printf("Sexo inválido");
    }
    }
