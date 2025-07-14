#include <stdio.h>

int main() {
  int notas[5];
  int i;
  for (i = 0; i < 100; i++) {
    printf("Digite a nota do aluno (%d): ", i);
    scanf("%d", &notas[i]);
  }
  return 0;
}
