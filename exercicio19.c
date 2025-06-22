#include <stdio.h>

int main() {
  unsigned char x, y;
  x = 44;
  printf("X = %d\n", x);
  y = ~x;
  printf("~X = %d\n", y);

  return 0;
}
