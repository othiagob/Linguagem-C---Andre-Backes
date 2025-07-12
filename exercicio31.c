#include <stdio.h>

int main() {
  int a, b, c;
  printf("Digite o valor de A: ");
  scanf("%d", &a);
  printf("Digite o valor de B: ");
  scanf("%d", &b);

  // incremento de 2 unidades
  for (c = a; c <= b; c = c + 2) {
    printf("%d \n", c);
  }
  // agora um novo valor é lido pelo teclado
  for (c = a; c <= b; scanf("%d ", &c)) {
    printf("%d \n", c);
  }

  return 0;
}
