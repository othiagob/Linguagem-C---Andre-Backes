#include <stdio.h>

int main() {
  int i, lista[5] = {3, 18000, 65, 51, 1155};
  int maior = lista[0];

  for (i = 1; i < 5; i++) {
    if (maior < lista[i])
      maior = lista[i];
  }
  printf("O maior numero é: %d\n", maior);
  return 0;
}
