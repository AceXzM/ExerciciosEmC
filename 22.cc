#include <stdio.h>
#include <cstring>
#include <ctype.h>

int main () 
{
    char letra;
    printf("Digite uma letra: ");
    scanf("%c", &letra);


    if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U')
    {
        printf("Vogal");
    }
    else
    {
        printf("Consoante");
    }
}
