#include <stdio.h>

struct ponto{
  int x,y;
};

int main(){
  printf("Tamanho de char: %c\n",sizeof(char));
  printf("Tamanho de int: %d\n", sizeof(int));
  printf("Tamanho de float: %f\n", sizeof(float));
  printf("Tamanho de double: %d\n", sizeof(double));
  printf("Tamanho de Struct: %d\n", sizeof(struct ponto));

  int x;
  double y;

  printf("Tamanho da variavel x: %d\n", sizeof x);
  printf("Tamanho da variavel y: %d\n", sizeof y);

  return 0;

}
