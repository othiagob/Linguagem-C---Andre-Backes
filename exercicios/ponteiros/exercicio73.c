#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i;
    int *p, *p1;

    p  = (int*)malloc(5 * sizeof(int));
    p1 = (int*)calloc(5, sizeof(int));
    printf("Calloc \t\t Malloc\n");
    for (i = 0; i < 5; i++) {
        printf("p1[%d]=%d \t p[%d] = %d\n", i, p1[i], i, p[i]);
    }
    return 0;
}
