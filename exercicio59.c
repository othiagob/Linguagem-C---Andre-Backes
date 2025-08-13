#include <stdio.h>
#include <stdlib.h>

int main(){
  //Vamos declarar uma variavel contendo um valor 10
  int count = 10;
  //declarando um ponteiro para int
  int *p;
  //agora vamos atribuir o ponteiro a variavel int
  p = &count;
  printf("Conteudo de COUNT apontado para o ponteiro P: %d\n", *p);
  //Agora vamos apontar um novo valor para o ponteiro Ṕ
  *p = 2025;
  printf("Conteudo novo apontado para P: %d\n", *p);
  printf("O conteudo inicial de COUNT: %d\n", count);

  return 0;
}
