#include <stdio.h>

int main() {
  int x, y, z;
  printf("Digite o numero de X: ");
  scanf("%d", &x);
  printf("Digite o numero de Y: ");
  scanf("%d", &x);
  z = x > y ? x : y;
  printf("O maior é: %d\n", z);

  return 0;
}
