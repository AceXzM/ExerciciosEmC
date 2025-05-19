#include <stdio.h>
#include <cstring>
#include <ctype.h>

int main () {
    
    int diaInt;
    char diaStr[40] = "";
    printf("Digite o numero do dia da semana: ");
    scanf("%i", &diaInt);

    if (diaInt == 1)
    strcpy(diaStr, "Domingo");
    else if (diaInt == 2)
    strcpy(diaStr, "Segunda");
    else if (diaInt == 3)
    strcpy(diaStr, "Terça");
    else if (diaInt == 4)
    strcpy(diaStr, "Quarta");
    else if (diaInt == 5)
    strcpy(diaStr, "Quinta");
    else if (diaInt == 6)
    strcpy(diaStr, "Sexta");
    else if (diaInt == 7)
    strcpy(diaStr, "Sabado");

    if (strcmp(diaStr, ""))
        printf("O dia correspondente e %s", diaStr);
    else 
        printf("Valor invalido");
    
}