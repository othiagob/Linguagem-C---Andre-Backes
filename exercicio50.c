#include <stdio.h>
#include <string.h>

int main() {
    char nome[50], sobrenome[50];
    printf("Digite seu primeiro nome: ");
    fgets(nome, 50, stdin);
    printf("Digite seu sobrenome: ");
    fgets(sobrenome, 50, stdin);
    strcat(nome, sobrenome);
    printf("%s", nome);

    return 0;
}
