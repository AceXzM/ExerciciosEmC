#include <stdio.h>
#include <ctype.h> 

int main() {
    char vet[100];  
    int consoante = 0;

    printf("Digite qualquer coisa: ");
    fgets(vet, sizeof(vet), stdin); 

    for (int i = 0; vet[i] != '\0'; i++) {
        char c = toupper(vet[i]); 

        if (isalpha(c) && c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U') {
            consoante++;
        }
    }

    printf("As consoantes foram: %d\n", consoante);
    return 0;
}
