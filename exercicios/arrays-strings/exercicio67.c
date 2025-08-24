#include <stdio.h>

int main() {
    int x    = 10;
    int* p   = &x;
    int** p2 = &p;

    printf("Endereço de memoria em P2: %p\n", p2);
    printf("Endereço em *P2: %p\n", *p2);
    printf("Endereço em **P2: %d\n", **p2);

    return 0;
}
