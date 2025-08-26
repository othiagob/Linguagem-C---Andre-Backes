#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* arq;
    arq = fopen("ArqGrav.txt", "rb");
    if (arq == NULL) {
        printf("Problemas ao abrir o arquivo.\n");
        exit(1);
    }
    char str1[20], str2[20];
    float x;
    int i, v1[5], v2[2];
    // le a string toda no arquivo.
    fread(str1, sizeof(char), 12, arq);
    str1[12] = '\0';
    printf("%s\n", str1);
    // le apenas os 5 primeiros caracteres
    fread(str2, sizeof(char), 5, arq);
    str2[5] = '\0';
    printf("%s\n", str2);
    // le o valor de x no arquivo
    fread(&x, sizeof(float), 1, arq);
    printf("%f\n", x);
    // le todo o array no arquivo de 5 posições
    fread(v1, sizeof(int), 5, arq);
    for (i = 0; i < 5; i++) {
        printf("v1[%d] = %d\n", i, v1[i]);
        // le apenas as duas primeiras posições
    }
    for (i = 0; i < 2; i++) {
        printf("v2[%d] = %d\n", i, v2[i]);
    }
    return 0;
}
