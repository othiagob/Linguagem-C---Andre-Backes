#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char buffer[10];
    char *endptr;

    // Lê o número de três dígitos
    printf("Digite um numero inteiro positivo de tres digitos: ");
    if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
        printf("Erro ao ler entrada!\n");
        return 1;
    }

    // Remove o \n do final se existir
    buffer[strcspn(buffer, "\n")] = '\0';

    // Converte string para inteiro com verificação de erro
    int numero = (int) strtol(buffer, &endptr, 10);

    // Verifica se a conversão foi bem-sucedida
    if (*endptr != '\0' || endptr == buffer) {
        printf("Erro: Digite apenas numeros!\n");
        return 1;
    }

    // Validação básica
    if (numero < 100 || numero > 999) {
        printf("Erro: O numero deve ter exatamente tres digitos!\n");
        return 1;
    }

    // Extrai cada dígito
    int centena = numero / 100;           // Primeiro dígito (centena)
    int dezena = (numero / 10) % 10;      // Segundo dígito (dezena)
    int unidade = numero % 10;            // Terceiro dígito (unidade)

    // Exibe os resultados
    printf("Numero lido = %d\n", numero);
    printf("Numero gerado = %d%d%d\n", unidade, dezena, centena);

    printf("\nDetalhes da inversao:\n");
    printf("Digitos originais: %d %d %d\n", centena, dezena, unidade);
    printf("Digitos invertidos: %d %d %d\n", unidade, dezena, centena);

    return 0;
}