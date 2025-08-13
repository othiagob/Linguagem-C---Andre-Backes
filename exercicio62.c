#include <stdio.h>

int main() {
    int *p, *p1, x, y;
    p  = &x;
    p1 = &y;

    if (p == p1) {
        printf("Os ponteiros são iguais.\n");
    } else {
        printf("Os ponteiros são diferentes!\n");
    }

    return 0;
}
