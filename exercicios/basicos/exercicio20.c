#include <stdio.h>

int main() {
  unsigned char x, y;
  x = 44;
  printf("X = %d\n", x);
  y = x & 167;
  printf("X &  167 = %d\n", y);
  y = x | 129;
  printf("X | 129 = %d\n", y);
  y = x ^ 167;
  printf("X ^ 167 = %d\n", y);

  return 0;
}
