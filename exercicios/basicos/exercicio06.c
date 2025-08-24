#include <stdio.h>

int main() {
  double number;
  scanf("%lf", &number);
  printf("O numero double é: %.2f e em notação científica é: %E", number,
         number);
}
