#include <stdio.h>
#include <stdlib.h>
#include <string.h>  // Necessário para strlen() e strcspn()

int main() {
    FILE* arq;
    char string[100];
    int i;

    // Abre o arquivo "arquivo.txt" no modo de escrita ("w")
    arq = fopen("arquivo.txt", "w");

    // Sempre verifique se o ponteiro do arquivo não é nulo
    if (arq == NULL) {
        printf("Erro na abertura do arquivo!\n");
        exit(1);  // Encerra o programa indicando um erro
    }

    printf("Digite a string que deseja gravar no arquivo.txt: ");

    // --- CORREÇÃO PRINCIPAL ---
    // Use fgets() para ler a string de forma segura
    // 1. Onde salvar: string
    // 2. Tamanho máximo: sizeof(string) para evitar estouro de buffer
    // 3. De onde ler: stdin (entrada padrão, o teclado)
    if (fgets(string, sizeof(string), stdin) != NULL) {
        // Opcional, mas recomendado: fgets() captura o "Enter" (\n).
        // A linha abaixo remove essa quebra de linha da string.
        string[strcspn(string, "\n")] = '\0';
    }

    printf("Gravando a string no arquivo...\n");

    // Agora vamos gravar a string caractere a caractere (sua lógica original)
    for (i = 0; i < strlen(string); i++) {
        fputc(string[i], arq);
    }

    // Fecha o arquivo para salvar as alterações
    fclose(arq);

    printf("String gravada com sucesso!\n");

    return 0;
}
