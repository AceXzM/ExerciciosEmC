#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    float taxab, taxacrescimentob, taxaa;

    printf("Digite uma população: ");
    float populaçãoa;
    scanf("%f", &populaçãoa);
    printf("Digite a taxa de crescimento: ");
    float taxa_crescimentoa;
    printf("Digite uma população: ");
    float população;
    scanf("%f", &população);
    printf("Digite a taxa de crescimento: ");
    float taxa_crescimento;
    scanf("%f", &taxa_crescimentoa);

    taxaa = taxa_crescimentoa/ 100;
    taxab = taxa_crescimento/ 100;
    int anos = 0;


    while (populaçãoa > população) {
        populaçãoa = população + (populaçãoa * taxaa);
        população = população + (população * taxab);
        anos++;
        }
    printf("Sera daqui a %d anos", anos);
}