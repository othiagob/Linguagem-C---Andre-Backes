#include <stdio.h>

int main() {
  float num1, num2, num3, num4;
  printf("Digite o primeiro numero: ");
  scanf("%f", &num1);
  printf("Digite o segundo numero: ");
  scanf("%f", &num2);
  printf("Digite o terceiro numero: ");
  scanf("%f", &num3);
  printf("Digite o quarto numero: ");
  scanf("%f", &num4);

  float media = (num1 + num2 + num3 + num4) / 4;
  printf("A media dos valores somados é: %f\n", media);

  return 0;
}
