#include <stdio.h>

int main () {
    printf("Digite o tamanho do arquivo (mb): ");
    int tamanho;
    scanf("%d", &tamanho);
    
    printf("Digite a velocidade da sua internet (mbps): ");
    float velocidade;
    scanf("%f", &velocidade); 
    
    float tempo;
    tempo = (tamanho * 8) / velocidade;
    
    printf("O tempo de download do arquivo e: %.2f segundos", tempo); 

    return 0; 
}