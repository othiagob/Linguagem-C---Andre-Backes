#include <stdio.h>

int main() {
  float x, y, f = 65.5;
  x = f / 10.0;
  y = (int)(f / 10.0);
  printf("x = %f\n", x);
  printf("y = %f\n", y);

  return 0;
}
