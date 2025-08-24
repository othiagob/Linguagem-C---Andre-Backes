#include <stdio.h>

int main() {
  char one, two, three;
  printf("Digite o primeiro caractere: ");
  scanf(" %c", &one);
  printf("Digite o segundo caractere: ");
  scanf(" %c", &two);
  printf("Digite o terceiro caractere: ");
  scanf(" %c", &three);

  printf("Primeiro: %c\nSegundo: %c\nTerceiro: %c\n", one, two, three);

  return 0;
}
