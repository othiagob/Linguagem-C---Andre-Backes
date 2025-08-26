#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE* arq;
    arq = fopen("ArqGrav.txt", "wb");
    if (arq == NULL) {
        printf("Erro na criação do arquivo!\n");
        exit(1);
    }
    char str[20] = "Olá mundo";
    float x      = 5;
    int v[5]     = {1, 2, 3, 4, 5};
    // Grava a string toda no arquivo
    fwrite(str, sizeof(char), strlen(str), arq);
    // Grava apenas os 5 primeiros caracteres da string.
    fwrite(str, sizeof(char), 5, arq);
    // grava o valor de X no arquivo.
    fwrite(&x, sizeof(float), 1, arq);
    // grava todo o array de 5 posições
    fwrite(v, sizeof(int), 5, arq);
    // Grava apenas as duas primeiras posições
    fwrite(v, sizeof(int), 2, arq);

    return 0;
}
