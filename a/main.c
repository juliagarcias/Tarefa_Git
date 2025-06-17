#include <stdio.h>

int main(void) {
    int N;
    int vetF[1000];
    int netos=0;

    scanf("%d", &N);

    for (int i=0; i<N;i++) {
        scanf("%d", &vetF[i]);
        netos=netos+vetF[i];
    }
    printf("%d", netos);
    return 0;
}