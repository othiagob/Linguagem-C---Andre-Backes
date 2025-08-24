#include <stdio.h>

int main() {
  float quilometros;
  printf("Digite a velocidade em KM/H: ");
  scanf("%f", &quilometros);

  float m = quilometros / 36;
  printf("A conversao para Metros por segundo é: %f\n", m);
  return 0;
}
