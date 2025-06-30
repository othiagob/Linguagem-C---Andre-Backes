#include <stdio.h>

int main() {
  float celsius, fahrenheit;
  printf("Digite a temperatura em Celsius: ");
  scanf("%f", &celsius);

  fahrenheit = celsius * (9.0 / 5.0) + 32;
  printf("A conversao é: %f\n", fahrenheit);

  return 0;
}
