#include <stdio.h>
#include <stdlib.h>

int main () {
    int i = 0; 
    int turmas, turma[turmas], soma = 0;
    printf("Digite quantas turmas: ");
    scanf("%d",&turmas);
    
    while (i < turmas) {
        printf("Digite a quantidade de alunos de cada turma: ");
        scanf("%d", &turma[i]);
        soma += turma[i];
        if (turma[i] < 0) {
        break;
    
    }
        i++;
    }
    float media = soma/i;
    printf("A media de alunos eh: %.2f", media);
}
