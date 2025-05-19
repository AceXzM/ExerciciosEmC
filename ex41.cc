#include <stdio.h>
#include <math.h>

int main () {
    float resultado, n1, n2, op;

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);
    printf("Agora qual operacao voce deseja realizar:\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    scanf("%f", &op);

    if (op == 1) {
        resultado = n1 + n2;
        printf("A soma e %.2f\n", resultado);
    }
    else if (op == 2) {
        resultado = n1 - n2;
        printf("A subtracao e %.2f\n", resultado);
    }
    else if (op == 3) {
        resultado = n1 * n2;
        printf("A multiplicacao e %.2f\n", resultado);
    }
    else if (op == 4) {
        if (n2 != 0) {
            resultado = n1 / n2;
            printf("A divisao e %.2f\n", resultado);
        } else {
            printf("Nao e possivel dividir por zero!\n");
            return 0;
        }
    } else {
        printf("Opcao invalida!\n");
        return 0;
    }

    if (resultado >= 0) {
        printf("O valor e positivo\n");
    } else {
        printf("O valor e negativo\n");
    }

    if ((int)resultado % 2 == 0) {
        printf("O valor e par\n");
    } else {
        printf("O valor e impar\n");
    }

    if (floor(resultado) == resultado) {
        printf("Inteiro\n");
    } else {
        printf("Decimal\n");
    }

    return 0;
}
