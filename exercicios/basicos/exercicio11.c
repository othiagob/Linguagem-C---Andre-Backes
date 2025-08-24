#include <stdio.h>
#define CONSTANTE 3.14

int main() {
  const int variavel = 2025;
  printf("Constante com #DEFINE declarada: %.2f\n", CONSTANTE);
  printf("Constante criada com CONST em uma variavel: %d\n", variavel);
  return 0;
}
