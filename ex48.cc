#include <stdio.h>
#include <stdlib.h>
#include <cstring>


int main () {
    char nome[50], sexo, estadocivil;
    int idade;
    float salario;

    printf("Digite seu nome: \n");
    scanf("%s", nome);

    while (strlen(nome) < 4) {
        printf("Nome invalido!\n");
        printf("Digite novamente: \n");
        scanf("%s", nome);
    }
    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    while (idade < 0 || idade > 150) {
        printf("Idade invalida, digite novamente: \n");
        scanf("%d", &idade);
    }
    printf("Digite seu salario: \n");
    scanf("%f", &salario);

    while (salario < 0) {
        printf("Salario invalido, digite novamente: \n");
        scanf("%f", &salario);
    }
    printf("Digite seu sexo (M/F): \n");
    scanf("%c", &sexo);

    while (sexo == 'M' || sexo == 'F' ) {
        printf("Sexo invalido, digite novamente: \n");
        scanf("%c", &sexo);
        }
        printf("Digite seu estado civil (s- solteiro, c- casado, v-viuvo, d- divorciado):\n ");
        scanf("%c", &estadocivil);
    
    while (estadocivil == 's' or 'S' || 'c' or 'C' || 'v' or 'V' || 'd' or 'D') {
        printf("Estado civil invalido, digite novamente: \n");
        scanf("%c", &estadocivil);
        }
        printf("Nome: %s\n", nome);
        printf("Idade: %d\n", idade);
        printf("Sexo: %c\n", sexo);
        printf("Estado civil: %c\n", estadocivil);

    }


    
