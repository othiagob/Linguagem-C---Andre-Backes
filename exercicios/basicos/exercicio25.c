#include <stdio.h>

int main() {
  int num;
  printf("Digite um numero: ");
  scanf("%d", &num);
  if (num > 10) {
    printf("O numero é maior que 10!\n");
  } else {
    printf("O numero é menor que 10.\n");
  }

  return 0;
}
