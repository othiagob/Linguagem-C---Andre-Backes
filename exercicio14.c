#include <stdio.h>

int main() {
  int x = 65;
  char ch;
  float f = 25.1;
  // ch vai receber 8 bits menos significativos de x
  // converte para tabela ASCII
  ch = x;
  printf("CH = %c\n", ch);
  // x recebe apenas a parte inteira de F
  x = f;
  printf("X = %d\n", x);
  // f recebe o valor de 8 bits convertido para real
  f = ch;
  printf("F = %f\n", f);
  // f recebe o valor de x
  f = x;
  printf("F = %f\n", f);

  return 0;
}
