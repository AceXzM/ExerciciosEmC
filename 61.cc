#include <stdio.h>

int main () {   
    int nf, n = 1;
    printf("Numero  para fatorial: ");
    scanf("%d", &nf);

    for ( int i = nf; i >= 1; i--) {
        n *= i;  
    }
    
    printf("O seu numero eh: %d", n);       
}