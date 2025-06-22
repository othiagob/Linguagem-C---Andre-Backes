#include <stdio.h>

int main() {
  float numero;
  printf("Digite um numero real: ");
  scanf("%f", &numero);

  printf("A quinta parte do numero %f é: %f\n", numero, numero / 5);
  return 0;
}
