#include <stdio.h>
#include <cstring>

int main () {
    float habitantesa = 80000, habitantesb = 200000, taxaa = 0.03, taxab = 0.015;
    float anos = 0;

    while (habitantesa > habitantesb) {
        habitantesa = habitantesa + (habitantesa * taxaa);
        habitantesb = habitantesb + (habitantesb * taxab);
        anos++;
        }
        
    printf("Sera daqui a %f anos", anos);
}
