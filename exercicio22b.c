#include <stdio.h>

int main() {
  int x = 10, y = 20;

  x += y - 10;
  printf("x = %d\n", x);
  x -= 5;
  printf("x = %d\n", x);
  x *= 10;
  printf("x = %d\n", x);
  x /= 15;
  printf("x = %d\n", x);

  return 0;
}
