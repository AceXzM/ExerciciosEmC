#include <stdio.h>
#include <string.h>
#include <math.h>

int main () {
    char binario[16];
    int total = 0;
    
    printf("Digite um numero binario: ");
    fgets(binario, 16, stdin);
    binario[strcspn(binario, "\n")] = '\0';

    int tamanho = strlen(binario);
    int potencia = 0;

    for (int i = tamanho - 1; i >= 0; i--) {
        int digito = binario[i] - '0';
        if (digito == 0 || digito == 1) {
            total += digito * pow(2, potencia);
            potencia++;
        } else {
            printf("Caractere invalido: %c\n", binario[i]);
            }
        }

        printf("Seu numero em decimal eh: %d\n", total);
        printf("E em Hexadecimal eh: ");
        switch (total) {
            case 0: printf("0\n"); break;
            case 1: printf("1\n"); break;
            case 2: printf("2\n"); break;
            case 3: printf("3\n"); break;
            case 4: printf("4\n"); break;
            case 5: printf("5\n"); break;
            case 6: printf("6\n"); break;
            case 7: printf("7\n"); break;
            case 8: printf("8\n"); break;
            case 9: printf("9\n"); break;
            case 10: printf("A\n"); break;
            case 11: printf("B\n"); break;
            case 12: printf("C\n"); break;
            case 13: printf("D\n"); break;
            case 14: printf("E\n"); break;
            case 15: printf("F\n"); break;
        }
    }
    