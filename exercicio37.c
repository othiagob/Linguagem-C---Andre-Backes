#include <stdio.h>

int main() {
  int mat[3][3];
  int i, j;
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("Digite o valor de mat[%d][%d]: ", i, j);
      scanf("%d", &mat[i][j]);
    }
  }
  return 0;
}
