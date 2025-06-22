#include <stdio.h>

int main() {
  // Por padrão na linguagem C quando um quociente é dividido usando
  // denominadores inteiros por padrão o compilador vai pegar o resultado da
  // parte inteira da divisão.

  float x;
  x = 5 / 4;
  printf("X = 5/4: %f\n", x);
  x = 5 / 4.0;
  printf("X = 5/4.0: %f\n", x);

  return 0;
}
