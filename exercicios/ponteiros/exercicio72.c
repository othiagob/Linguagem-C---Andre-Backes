#include <stdio.h>
#include <stdlib.h>

int main() {
    int* p;
    p = (int*)malloc(50 * sizeof(int));
    if (p == NULL) {
        printf("Erro: MEMORIA INSUFICIENTE CABRA MACHO!\n");
    }
    // ALLOCAÇÃO COM CALLOC
    int* p1;
    p1 = (int*)calloc(50, sizeof(int));
    if (p1 == NULL) {
        printf("Erro de novo mano!");
    }

    int i;
    for (i = 0; i < 50; i++) {
        printf("O valor de malloc: %d \nPosição do malloc: %p\n", i, &p1);
    }
    return 0;
}
