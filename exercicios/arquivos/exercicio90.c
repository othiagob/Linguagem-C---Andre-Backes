#include <stdio.h>
#include <stdlib.h>

int main() {
    char nome[20] = "Thiago B.";
    int idade     = 32;
    float altura = 1.70;

    FILE *arq = fopen("ArqGrav.txt", "w");
    if (arq == NULL) {
        printf("Problemas na abertura do arquivo.\n");
        exit(1);
    }
    int result = fprintf(arq, "Nome: %s\nIdade: %d\nAltura: %f\n", nome, idade, altura);
    if (result < 0) {
        printf("Erro na escrita!\n");
    }
    fclose(arq);
    return 0;
}
