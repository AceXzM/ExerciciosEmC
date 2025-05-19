#include <stdio.h>
#include <stdlib.h>
#include <cmath>

int main() {
    printf("Quantos graus celsius ta fazeno ai?: ");
    int celso;
    scanf("%d", &celso);

    int faren;
    faren = (celso * 9/5) + 32;
    printf("Ta fazeno %d graus farenheit ai \n", faren);

}