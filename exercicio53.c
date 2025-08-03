#include <stdio.h>

struct cadastro {
    char nome[50];
    int idade;
    char rua[50];
    int numero;
};

int main() {
    struct cadastro c[4];

    int i;
    for (i = 0; i < 4; i++) {
        fgets(c[i].nome, sizeof(c[i].nome), stdin);
        scanf("%d", &c[i].idade);
        fgets(c[i].rua, sizeof(c[i].rua), stdin);
        scanf("%d", &c[i].numero);
    }

    return 0;
}
