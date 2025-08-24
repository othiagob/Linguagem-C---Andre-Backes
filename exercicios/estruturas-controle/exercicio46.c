#include <stdio.h>

int main() {
  char nome[30];
  printf("Digite um nome: ");
  fgets(nome, 30, stdin);
  printf("O nome digiado foi: %s", nome);

  return 0;
}
