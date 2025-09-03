#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n = 125;
  //octal e hexadecimal sem prefixo
  printf("x = %o\n", n);
  printf("x = %X\n", n);

  printf("x = %#o\n",n);
  printf("x = %#X\n",n);

  float x = 5.00;
  printf("x = %.f\n",x);
  printf("x = %#.f\n",n);

  return 0;

}
