#include <stdio.h>

int main() {
  float v1[10] = {1, 2, 3};
  int v2[10] = {11, 12, 13};
  char str[10] = "joao";
  for (int i = 0; i < 10; i++) {
    printf("%f %d %c\n", v1[i], v2[i], str[i]);
  }
  return 0;
}
