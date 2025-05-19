#include <stdio.h>
#include <stdlib.h>
#include <cmath>

int main() {
    printf("Quantos graus em farenheit ta fazeno ai?: ");
    int farenheit;
    scanf("%d", &farenheit);

    int cel;
    cel = (farenheit - 32) * 5/9;
    printf("Ta fazeno %d graus farenheit ai \n", cel);

}