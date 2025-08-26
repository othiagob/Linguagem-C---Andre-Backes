#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* arq;
    arq = fopen("ArqGrav.txt", "rb");
    if (arq == NULL) {
        printf("Problemas na abertura do arquivo.\n");
        exit(1);
    }
    int i, total_lido, v[5];
    // Vamos ler as 5 posições inteiras do arquivo.
    total_lido = fread(v, sizeof(int), 5, arq);
    if (total_lido != 5) {
        printf("erro na leitura do arquivo!\n");
        exit(1);
    } else {
        for (i = 0; i < 5; i++) {
            printf("v[%d] = %d\n", i, v[i]);
        }
    }
    fclose(arq);
    return 0;
}
