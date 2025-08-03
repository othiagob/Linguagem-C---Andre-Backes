#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cadastro {
    char nome[50];
    int idade;
    char rua[100];
    int numero;
};

int main(){
  struct cadastro c;
  fgets(c.nome, sizeof(c.nome), stdin);

  scanf("%d", c.idade);

  fgets(c.rua, sizeof(c.rua), stdin);

  scanf("%d", c.numero);

  return 0;
}
