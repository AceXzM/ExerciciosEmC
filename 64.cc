#include <stdio.h>

int main () {   
    int nf, n = 1;
    printf("Numero  para fatorial: ");
    scanf("%d", &nf);

    while (true) {
        printf("Numero  para fatorial: \n");
        scanf("%d", &nf);

        if (nf > 16) {

            for ( int i = nf; i >= 1; i--) {
            n *= i;
            }
            printf("O seu numero eh: %d\n", n);  

            if (nf == 0) {
                break;
            }  
        else {
            printf("O valor de %d e muito grande para calcular o fatorial.\n", nf);
            printf("Numero  para fatorial: ");
            scanf("%d", &nf);
        }
    }  
    }
}