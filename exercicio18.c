#include <stdio.h>

int main() {
  int r, x = 5, y = 3;
  r = (x > 2) && (y < x); // verdadeiro (1)
  printf("Resultado: %d\n", r);

  r = (x % 2 == 0) && (y > x); // falso (0)
  printf("Resultado: %d\n", r);

  r = (x > 2) || (y > x); // verdadeiro (1)
  printf("Resultado: %d\n", r);

  r = (x % 2 == 0) || (y < 0); // falso (0)
  printf("Resultado: %d\n", r);

  r = !(x > 2); // falso (0)
  printf("Resultado: %d\n", r);

  r = !(x > 7) && (x > y); // verdadeiro (1)
  printf("Resultado: %d\n", r);

  return 0;
}
