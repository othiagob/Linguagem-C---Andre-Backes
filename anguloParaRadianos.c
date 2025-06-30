#include <stdio.h>

int main() {
  float graus, radianos;
  const float PI = 3.141592;

  printf("Digite o angulo em graus: ");
  scanf("%f", &graus);

  radianos = graus * PI / 180.0;

  printf("%.2f graus equivalem  a %.4f radianos.\n", graus, radianos);

  return 0;
}
