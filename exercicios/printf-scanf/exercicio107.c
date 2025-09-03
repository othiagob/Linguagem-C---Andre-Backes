#include <stdio.h>

int main(){
  float n = 123.45678;
  printf("n = %.3f\n", n);
  printf("n = %.4f\n", n);
  printf("n = %.5e\n", n);
  printf("n = %.5g\n", n);

  return 0;
}
