#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[20];
    char* result;
    FILE* arq;
    arq = fopen("ArqGrav.txt", "r");
    if (arq == NULL) {
        printf("Problemas na abertura do texto!\n");
        exit(1);
    }
    result = fgets(str, 13, arq);
    if (result == NULL) {
        printf("Erro na leitura!\n");
    } else {
        printf("Arquivo lido com sucesso!\n ARQUIVO: %s", str);
    }
    return 0;
}
