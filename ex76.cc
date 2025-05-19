#include <stdio.h>
#include <stdlib.h>
#include <cmath>


int main () {
    char tecla;
    int num = 0, i = 0;
    float temperatura = 0, total = 0, maior = -INFINITY, menor= INFINITY;
    
    while (1) {
        num++;
        printf("Pressione Q para parar\n");
        printf("Temperatura %d: ", num);
        scanf("%f", &temperatura); 
        
        tecla = getchar();     
        if (tecla == 'q') {
            break;
        }

        if (temperatura < menor)
        menor = temperatura;
        if (temperatura > maior)
        maior = temperatura; 
        {
            total += temperatura;
            i++;
        }
    }
    printf("A maior temperatura: %1.f C\n", maior);
    printf("A menor temperatura: %1.f C\n", menor);  
    printf("Media das temperaturas: %2.f\n", total/i);
}