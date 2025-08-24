#include <stdio.h>

int main() {
    int* pvet[2];
    int x = 10, y[2] = {20, 30};
    pvet[0] = &x;
    pvet[1] = y;
    // vai imprimir os endereços das variaveis.
    printf("Endereço da variavel PVET[0]: %p\n", pvet[0]);
    printf("Endereço da variavel PVET[1: %p\n", pvet[1]);

    printf("Conteudo da variavel PVET[0]: %d\n", *pvet[0]);
    printf("conteudo da variavel PVET[1]: %d\n", *pvet[1]);

    printf("Conteudo PVET[1][1]: %d\n", pvet[1][1]);

    return 0;
}
