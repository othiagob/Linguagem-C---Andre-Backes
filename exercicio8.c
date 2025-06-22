#include <stdio.h>

int main() {
  int num1, num2;
  printf("Digite um numero: ");
  scanf("%d", &num1);
  printf("Digite outro numero: ");
  scanf("%d", &num2);

  printf("Voce digitou primeiro: %d e depois: %d\n", num1, num2);
  printf("A ordem inversa fica primeiro: %d e segundo: %d", num2, num1);

  return 0;
}
