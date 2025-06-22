#include <stdio.h>

int main() {
  int x = 10, y = 20, z;
  z = x * y;
  printf("Z = X * Y: %d\n", z);
  z = y / x;
  printf("Z = Y / X: %d\n", z);
  z = x + y;
  printf("Z = X + Y: %d\n", z);

  return 0;
}
