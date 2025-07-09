#include <stdio.h>

int main() {
  char ch;
  int a, b;
  printf("Digite uma operação matematica: ");
  ch = getchar();
  printf("Digite o primeiro numero: ");
  scanf("%d", &a);
  printf("Digite o segundo numero: ");
  scanf("%d", &b);
  switch (ch) {
  case '+': {
    int soma = a + b;
    printf("%d + %d: %d\n", a, b, soma);
  } break;
  case '-': {
    int subtracao = a - b;
    printf("%d - %d: %d\n", a, b, subtracao);
  } break;
  case '/': {
    int divisao = a / b;
    printf("%d / %d: %d\n", a, b, divisao);
  } break;
  case '*': {
    int multiplicacao = a * b;
    printf("%d * %d: %d\n", a, b, multiplicacao);
  } break;
  default:
    printf("Operador invalido.\n");
  }
  return 0;
}
