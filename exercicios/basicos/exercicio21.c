#include <stdio.h>

int main() {
  unsigned char x, y;
  x = 44;
  printf("X = %d\n", x);
  y = x << 2;
  printf("X << 2: %d\n", y);
  y = x >> 2;
  printf("X >> 2: %d\n", y);

  return 0;
}
