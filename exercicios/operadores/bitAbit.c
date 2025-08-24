#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char buffer[20];
    int numero;
    char *endptr;

    // Lê o número inteiro
    printf("Digite um numero inteiro: ");
    if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
        printf("Erro ao ler entrada!\n");
        return 1;
    }

    // Remove o \n do final se existir
    buffer[strcspn(buffer, "\n")] = '\0';

    // Converte string para inteiro com verificação de erro
    numero = (int)strtol(buffer, &endptr, 10);

    // Verifica se a conversão foi bem-sucedida
    if (*endptr != '\0' || endptr == buffer) {
        printf("Erro: Digite apenas numeros!\n");
        return 1;
    }

    // Operações usando deslocamento de bits
    int multiplicacao = numero << 1;  // Desloca 1 bit à esquerda (multiplica por 2)
    int divisao = numero >> 1;        // Desloca 1 bit à direita (divide por 2)

    // Mostra os resultados
    printf("\nNumero original: %d\n", numero);
    printf("Multiplicacao por 2 (num << 1): %d\n", multiplicacao);
    printf("Divisao por 2 (num >> 1): %d\n", divisao);

    // Demonstração do que acontece em binário
    printf("\nRepresentacao em binario (primeiros 8 bits):\n");
    printf("Original:      ");
    for (int i = 7; i >= 0; i--) {
        printf("%d", (numero >> i) & 1);
    }
    printf(" (%d)\n", numero);

    printf("Multiplicado:  ");
    for (int i = 7; i >= 0; i--) {
        printf("%d", (multiplicacao >> i) & 1);
    }
    printf(" (%d)\n", multiplicacao);

    printf("Dividido:      ");
    for (int i = 7; i >= 0; i--) {
        printf("%d", (divisao >> i) & 1);
    }
    printf(" (%d)\n", divisao);

    // Comparação com operadores tradicionais
    printf("\nComparacao com operadores tradicionais:\n");
    printf("Multiplicacao tradicional (num * 2): %d\n", numero * 2);
    printf("Divisao tradicional (num / 2): %d\n", numero / 2);

    return 0;
}