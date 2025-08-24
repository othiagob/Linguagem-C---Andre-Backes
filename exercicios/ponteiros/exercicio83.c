#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE* arq;
    arq = fopen("arquivo.txt", "rb");
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo!");
        exit(1);
    }
    int tamanho;
    fseek(arq, 0, SEEK_END);
    tamanho = ftell(arq);
    fclose(arq);
    printf("O tamanho do arquivo em bytes: %d \n", tamanho);

    return 0;
}
