#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* arq;
    arq = fopen("matriz.txt", "w");
    if (arq == NULL) {
        printf("Erro!\n");
        exit(1);
    }
    int mat[2][2] = {{1, 2}, {3, 4}};
    int i, j;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            fprintf(arq, "%d", mat[i][j]);
        }
    }

    return 0;
}
