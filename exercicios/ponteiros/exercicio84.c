#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[20] = "Hello World!";
    int result;
    FILE* arq;

    arq = fopen("ArqGrav.txt", "w");
    if (arq == NULL) {
        printf("Problemas na criação do arquivo.\n");
        exit(1);
    }
    result = fputs(str, arq);
    if (result == EOF)
        ;
    printf("Erro na gravação do arquivo!\n");

    fclose(arq);

    return 0;
}
