#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Função para imprimir um número em binário
void imprimirBinario(int numero, int bits) {
    for (int i = bits - 1; i >= 0; i--) {
        printf("%d", (numero >> i) & 1);
        // Adiciona um espaço a cada 4 bits para melhor legibilidade
        if (i % 4 == 0 && i != 0) {
            printf(" ");
        }
    }
}

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

    // Calcula o complemento bit a bit usando o operador ~
    int complemento = ~numero;

    // Mostra os resultados
    printf("\n=== COMPLEMENTO BIT A BIT ===\n");
    printf("Numero original: %d\n", numero);
    printf("Complemento: %d\n", complemento);

    // Representação em binário (32 bits)
    printf("\nRepresentacao em binario (32 bits):\n");

    printf("Original:   ");
    imprimirBinario(numero, 32);
    printf(" (%d)\n", numero);

    printf("Complemento: ");
    imprimirBinario(complemento, 32);
    printf(" (%d)\n", complemento);

    // Demonstração com menos bits para melhor visualização
    printf("\nVisualizacao simplificada (8 bits):\n");

    printf("Original:   ");
    imprimirBinario(numero, 8);
    printf(" (%d em 8 bits)\n", numero & 0xFF);

    printf("Complemento: ");
    imprimirBinario(complemento, 8);
    printf(" (%d em 8 bits)\n", complemento & 0xFF);

    // Explicação bit por bit (primeiros 8 bits)
    printf("\nAnalise bit por bit (primeiros 8 bits):\n");
    printf("Posicao: 7 6 5 4 3 2 1 0\n");
    printf("Original: ");
    for (int i = 7; i >= 0; i--) {
        printf("%d ", (numero >> i) & 1);
    }
    printf("\nComplemento: ");
    for (int i = 7; i >= 0; i--) {
        printf("%d ", (complemento >> i) & 1);
    }
    printf("\n");

    // Informações adicionais sobre o complemento
    printf("\n=== INFORMACOES SOBRE O COMPLEMENTO ===\n");
    printf("O operador ~ inverte todos os bits:\n");
    printf("- 0 vira 1\n");
    printf("- 1 vira 0\n");
    printf("Relacao matematica: ~n = -(n + 1)\n");
    printf("Verificacao: ~%d = -(%d + 1) = %d\n", numero, numero, -(numero + 1));

    return 0;
}