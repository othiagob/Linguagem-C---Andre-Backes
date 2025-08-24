#include <stdio.h>

int main() {
  int num1, num2, num3;

  printf("Digite o primeiro numero: ");
  scanf("%d", &num1);
  printf("Digite o segundo numero: ");
  scanf("%d", &num2);
  printf("Digite o terceiro numero: ");
  scanf("%d", &num3);

  int soma = num1 + num2 + num3;
  printf("A soma dos tres valores digitados é: %d\n", soma);

  return 0;
}
