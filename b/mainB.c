#include <stdio.h>

int main(void) {
    int y;
    int idadeReal;
    int idadeEsperada;
    scanf("%d", &y);
    idadeReal=2025-y;
    idadeEsperada=2025-(2*idadeReal);
    printf("%d", idadeEsperada);

    return 0;
}