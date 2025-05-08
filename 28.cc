#include <stdio.h>

int main () {
    printf("Qual turno voce estuda?\n");
    printf("M- Matutino, V-Vespertino, N-Noturno: \n");
    char turno;
    scanf("%c", &turno);

    if (turno == 'M' || turno == 'm') {
        printf("Voce estuda no turno matutino.\n");
        }
        else if (turno == 'V' || turno == 'v') {
            printf("Voce estuda no turno vespertino.\n");
            }
            else if (turno == 'N' || turno == 'n') {
                printf("Voce estuda no turno noturno.\n");
                }
                else {
                    printf("Turno invalido.\n");
                    }
}