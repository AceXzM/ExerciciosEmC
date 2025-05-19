#include <stdio.h>
#include <cmath>

int main()
{
    float raio, area;
    printf("Digite o valor do raio: ");
    scanf("%f", &raio);
    area = M_PI * pow(raio, 2);
    printf("A area eh %f", area);
    return 0;
}