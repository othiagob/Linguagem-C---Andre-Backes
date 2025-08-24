#include <stdio.h>

int main() {
  int numero;

  printf("Digite um numero: ");
  scanf("%d", &numero);

  printf("O antecessor do numero %d é: %d\n", numero, numero - 1);
  printf("O sucessor do numero %d é: %d\n", numero, numero + 1);

  return 0;
}
