#include <stdio.h>
#include <stdlib.h>

int main(){
  unsigned int n = 2147483647;
  printf("Valor real: %d\n", n);
  printf("Valor real: %u\n",n);
  n = n + 1;
  printf("Valor real: %d\n", n);
  printf("Valor real: %u\n", n);
  printf("Endereço de N = %p\n",n);

  return 0;
}
