#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

int main()
{
    float notas = 0, nota;
    int contador = 0;
    char continuar = 'S';
    while (continuar == 'S' || continuar == 's')
    {
        printf("\nDigite as idades: ");
        scanf("%f", &nota);
        getchar();

        notas += nota;
        contador++;

        printf("\nDeseja continuar? (S/N): ");
        scanf("%c", &continuar);
        getchar();
        
    }
    float media = notas / contador;
    
    if (media <= 25) {
        printf("A media e: %1.f\n", media);
        printf("Sua turma é jovem");
    }
    if (media > 25 && media <= 60) {
        printf("A media e: %1.f\n", media);
        printf("Sua turma é adulta");
    }
    if (media > 60) {
        printf("A media e: %1.f\n", media);
        printf("Sua turma é idosa");   
    }
}