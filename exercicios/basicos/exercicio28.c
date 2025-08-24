#include <stdio.h>

int main() {
  char ch;
  printf("Digite um simbolo de pontuação: ");
  ch = getchar();
  switch (ch) {
  case '.':
    printf("Ponto\n");
    break;
  case ',':
    printf("Virgula\n");
    break;
  case ':':
    printf("Dois pontos\n");
    break;
  case ';':
    printf("Ponto e virgula\n");
    break;
  default:
    printf("Voce nao digitou um caractere valido!\n");
  }
  return 0;
}
