#include <iostream>
#include <stdio.h>
#include <cstring>


int main () {
    char nome[50], senha[50];
    printf("Digite um nome de usuario: ");
    scanf("%s", &nome);
    printf("Digite uma senha agora: ");
    scanf("%s", &senha);

    while (!strcmp(nome, senha)) {
        printf("A senha nao pode ser igual ao nome de usuario!\n");
        printf("Digite uma senha agora: ");
        scanf("%s", &senha);
        }
        printf("Nome de usuario: %s\n", nome);
        printf("Senha: %s\n", senha);
}