#include <stdio.h>

int main() {
  char caractere;

  printf("Digite um caractere: ");
  scanf("%c", &caractere);

  printf("O valor inteiro do caractere '%c' é: %d\n", caractere, caractere);

  return 0;
}
