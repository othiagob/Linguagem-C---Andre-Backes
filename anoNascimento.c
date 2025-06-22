#include <stdio.h>

int main() {
  int ano = 2025;
  int idade;
  printf("Digite a sua idade: ");
  scanf("%d", &idade);
  int anoNascimento = ano - idade;
  printf("Voce nasceu em: %d\n", anoNascimento);

  return 0;
}
