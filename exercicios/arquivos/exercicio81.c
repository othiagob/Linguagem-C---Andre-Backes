#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *arquivo;   // ponteiro para o arquivo
    int c;           // precisa ser int para armazenar EOF corretamente

    // abre o arquivo em modo leitura
    arquivo = fopen("arquivo.txt", "r");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo"); // mostra erro do sistema (ex: "Arquivo inexistente")
        return 1; // sai com código de erro
    }

    // lê caractere por caractere até encontrar EOF
    while ((c = fgetc(arquivo)) != EOF) {
        putchar(c); // imprime diretamente o caractere
    }

    fclose(arquivo); // fecha o arquivo
    return 0; // finaliza com sucesso
}

