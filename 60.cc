#include <stdio.h>

int main () {
    int n = 1, na = 0, aux;
  
    for (int i = 0; i < 15; i++) {
        aux = n;
        n += na;
        na = aux;
        printf("%d\n", n);
    }
}